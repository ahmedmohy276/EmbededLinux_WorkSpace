import socket
from _thread import *


Length = 1024
FORMAT = 'UTF-8'
PORT = 5000
SERVER_IP = socket.gethostbyname(socket.gethostname())
ADDR = (SERVER_IP,PORT)

def client_handler(connection):
    global Length
    global FORMAT
    msg = "You are now connected to the replay server... Type BYE to stop"
    connection.send(msg.encode(FORMAT))
    while True:
        recdata = connection.recv(Length)
        decodedata = recdata.decode(FORMAT)
        print(f"{SERVER_IP} is sending to you this message\n {decodedata}" )
        print("====================================") 
        if decodedata == 'BYE':
            reply = f'Server: {decodedata}'
            connection.send(reply.encode(FORMAT))
            break
        senddata = "Received...."
        connection.send(senddata.encode(FORMAT))
    connection.close()
    
def accept_connections(server_socket):
    Client, address = server_socket.accept()
    print('Connected to: ' + address[0] + ':' + str(address[1]))
    print("====================================") 
    start_new_thread(client_handler,(Client,))

    
def start_server(Address,port):
    ServerSocket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
    ServerSocket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    try:
        ServerSocket.bind(Address)
    except socket.error as e:
        print(str(e))
    print(f"Server is listening on port {port}....")
    ServerSocket.listen(5)
    while True:
        accept_connections(ServerSocket)

    
start_server(ADDR,PORT)

    
    