import socket


Length = 1024
FORMAT = 'UTF-8'
PORT = 5000
CLIENT_IP = socket.gethostbyname(socket.gethostname())
ADDR = (CLIENT_IP,PORT)
ClientSocket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)


print('Waiting for connection\n')
try:
    ClientSocket.connect(ADDR)
except socket.error as e:
    print(str(e))
    
Response = ClientSocket.recv(Length)
print(f"{CLIENT_IP} is sending to you this message\n {Response.decode(FORMAT)}" )
print("====================================") 


while True:
    Input = str(input("Please inter message to send\n"))
    ClientSocket.send(str.encode(Input))
    Response = ClientSocket.recv(Length)
    print(f"{CLIENT_IP} is sending to you this message\n {Response.decode(FORMAT)}" )
    print("====================================") 
    if Input == "BYE":
        break
ClientSocket.close()
