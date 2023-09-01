
import socket


Length = 1024
FORMAT = 'UTF-8'
PORT = 5000

server = socket.socket(socket.AF_INET,socket.SOCK_STREAM)   #Domain:IP Version.4,protocol:TCP
SERVER_IP = socket.gethostbyname(socket.gethostname()) # to get local host address
ADDR = (SERVER_IP,PORT)
print("Your IP is : ",SERVER_IP)
server.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
try :
    server.bind(ADDR)
except socket.error as err:
    print(str(err))
print(f"Server is listening on port {PORT}....")
server.listen(5)

while True:
    client,address = server.accept() # wait till client connect
    rowdata = client.recv(Length) # receive with max num of bytes 1024
    print("====================================") 
    print(f"{address} is sending to you this message\n {rowdata.decode(FORMAT)}" )
    print("====================================")
    msg = str(input("please inter message you want to send \n"))
    msg_encoded = msg.encode(FORMAT)
    client.send(msg_encoded)
    client.close()
    