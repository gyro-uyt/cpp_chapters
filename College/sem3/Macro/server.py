import socket

# IP4.ADDRESS[1]:                         10.248.3.21/24
# IP4.GATEWAY:                            10.248.3.203
# HOST = "127.0.0.1" 
HOST = "0.0.0.0"   # listen on all network interfaces
PORT = 65432  

server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

server_socket.bind((HOST, PORT))

server_socket.listen()
print(f"Server started! Listening on {HOST}:{PORT}")

conn, addr = server_socket.accept()
print(f"Connected by {addr}")

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

conn.close()
server_socket.close()
print("Server closed.")
