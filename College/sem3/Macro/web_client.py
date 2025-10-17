from flask import Flask, render_template, request, jsonify
import socket
import threading

app = Flask(__name__)

HOST = "192.168.145.12"  # <-- replace with your laptop's IP (server)
PORT = 65432

# Connect socket once
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client_socket.connect((HOST, PORT))

messages = []  # store messages to display on web

def receive_messages():
    """Receive messages continuously from the socket server."""
    while True:
        try:
            data = client_socket.recv(1024)
            if not data:
                break
            msg = data.decode()
            messages.append(f"Server: {msg}")
        except:
            break

# Run background thread for receiving
threading.Thread(target=receive_messages, daemon=True).start()

@app.route("/")
def index():
    return render_template("index.html", messages=messages)

@app.route("/send", methods=["POST"])
def send_message():
    msg = request.form.get("message")
    if msg:
        client_socket.sendall(msg.encode())
        messages.append(f"You: {msg}")
    return jsonify(success=True)

@app.route("/messages")
def get_messages():
    """Send messages to the browser for live refresh."""
    return jsonify(messages=messages)

if __name__ == "__main__":
    app.run(host="0.0.0.0", port=5000, debug=False)
