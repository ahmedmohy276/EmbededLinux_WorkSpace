import socket

Length = 1024
FORMAT = 'UTF-8'
PORT = 5000
CLIENT_IP = socket.gethostbyname(socket.gethostname())
ADDR = (CLIENT_IP,PORT)
print("Your IP is : ",CLIENT_IP)
print("====================================")


while True:
    client = socket.socket(socket.AF_INET,socket.SOCK_STREAM) #Domain:IP Version.4,protocol:TCP
    client.connect(ADDR)
    msg = str(input("Please inter message to send\n"))
    msg_encoded = msg.encode(FORMAT)
    client.send(msg_encoded)
    print("====================================")    
    
    rowdata = client.recv(Length)
    print(f"{CLIENT_IP} is sending to you this message\n {rowdata.decode(FORMAT)}" )
    print("====================================") 
    client.close()
    

