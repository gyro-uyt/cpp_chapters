import socket

HOST = "127.0.0.1"
PORT = 65432

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
server_socket.bind((HOST, PORT))
server_socket.listen()

print(f"Server started! Listening on {HOST}:{PORT}")

conn, addr = server_socket.accept()
print(f"Connected by {addr}") 

try:
    while True:
        data = conn.recv(1024)
        if not data:
            print("Client disconnected.")
            break

        message = data.decode()
        print(f"Client: {message}")

        if message.lower() == "exit":
            print("Client ended the chat.")
            break

        reply = input("Server: ")
        conn.sendall(reply.encode())

except ConnectionResetError:
    print("Connection lost unexpectedly.")
finally:
    conn.close()
    server_socket.close()
    print("Server closed.")
