import socket

HOST = "127.0.0.1"  # Localhost (server runs on your own machine)
PORT = 65432  # Port number (can be any free port above 1024)

# 1️⃣ Create TCP socket
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# 2️⃣ Bind it to an address and port
server_socket.bind((HOST, PORT))

# 3️⃣ Start listening for client connections
server_socket.listen()
print(f"🚀 Server started! Listening on {HOST}:{PORT}")

# 4️⃣ Accept a client connection
conn, addr = server_socket.accept()
print(f"✅ Connected by {addr}")

# 5️⃣ Start chatting loop
while True:
    # Receive message from client
    data = conn.recv(1024)
    if not data:
        print("❌ Client disconnected.")
        break

    message = data.decode()
    print(f"Client: {message}")

    # Optional exit condition
    if message.lower() == "exit":
        print("💬 Client ended the chat.")
        break

    # Send reply to client
    reply = input("Server: ")
    conn.sendall(reply.encode())

# 6️⃣ Close connection
conn.close()
server_socket.close()
print("🔒 Server closed.")
