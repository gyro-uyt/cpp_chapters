import socket
import threading
import tkinter as tk
from tkinter import scrolledtext, messagebox

HOST = "127.0.0.1"
PORT = 65432

class ChatClient:
    def __init__(self, master):
        self.master = master
        self.master.title("TCP Chat Client")
        self.master.geometry("400x500")

        self.chat_area = scrolledtext.ScrolledText(master, wrap=tk.WORD, state='disabled')
        self.chat_area.pack(padx=10, pady=10, fill=tk.BOTH, expand=True)

        self.entry = tk.Entry(master, width=40)
        self.entry.pack(side=tk.LEFT, padx=(10, 0), pady=10, fill=tk.X, expand=True)
        self.entry.bind("<Return>", self.send_message)

        self.send_button = tk.Button(master, text="Send", command=self.send_message)
        self.send_button.pack(side=tk.LEFT, padx=5, pady=10)

        self.exit_button = tk.Button(master, text="Exit", command=self.close_connection)
        self.exit_button.pack(side=tk.RIGHT, padx=10, pady=10)

        self.client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        try:
            self.client_socket.connect((HOST, PORT))
            self.add_message(f"Connected to server {HOST}:{PORT}\n")
        except ConnectionRefusedError:
            messagebox.showerror("Connection Error", "Could not connect to server.")
            self.master.destroy()
            return

        self.running = True
        threading.Thread(target=self.receive_messages, daemon=True).start()

    def add_message(self, msg):
        self.chat_area.config(state='normal')
        self.chat_area.insert(tk.END, msg + "\n")
        self.chat_area.yview(tk.END)
        self.chat_area.config(state='disabled')

    def send_message(self, event=None):
        msg = self.entry.get().strip()
        if not msg:
            return
        self.add_message(f"You: {msg}")
        self.client_socket.sendall(msg.encode())
        self.entry.delete(0, tk.END)

        if msg.lower() == "exit":
            self.close_connection()

    def receive_messages(self):
        try:
            while self.running:
                data = self.client_socket.recv(1024)
                if not data:
                    break
                msg = data.decode()
                self.add_message(f"Server: {msg}")
        except OSError:
            pass
        finally:
            self.client_socket.close()

    def close_connection(self):
        if self.running:
            self.running = False
            try:
                self.client_socket.sendall("exit".encode())
            except:
                pass
            self.client_socket.close()
        self.master.destroy()


if __name__ == "__main__":
    root = tk.Tk()
    app = ChatClient(root)
    root.mainloop()
