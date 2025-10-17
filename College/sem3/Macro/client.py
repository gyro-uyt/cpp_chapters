import socket
 
HOST = "127.0.0.1"  
PORT = 65432  

client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

client_socket.connect((HOST, PORT))
print(f"Connected to server at {HOST}:{PORT}")

while True:
    msg = input("Client: ")
    client_socket.sendall(msg.encode())

    if msg.lower() == "exit":
        print("Connection closed.")
        break

    data = client_socket.recv(1024)
    print("Server:", data.decode())

client_socket.close()
