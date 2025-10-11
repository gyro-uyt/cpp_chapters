import socket

HOST = "127.0.0.1"  # Server's IP (localhost)
PORT = 65432  # Same port as used by server

# 1️⃣ Create TCP socket
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 2️⃣ Connect to server
client_socket.connect((HOST, PORT))
print(f"🤝 Connected to server at {HOST}:{PORT}")

# 3️⃣ Chat loop
while True:
    msg = input("Client: ")
    client_socket.sendall(msg.encode())

    if msg.lower() == "exit":
        print("👋 Connection closed.")
        break

    data = client_socket.recv(1024)
    print("Server:", data.decode())

# 4️⃣ Close
client_socket.close()
