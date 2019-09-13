import socket
f=open("hello.txt","r").read()
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)         
port = 12345               
s.connect(('127.0.0.1', port))
s.sendall(str.encode(f))
print (s.recv(1024).decode('ascii'))
s.close()       
