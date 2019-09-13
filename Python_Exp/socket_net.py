import socket               
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)         
print ("Socket successfully created")
port = 12345               
s.bind(('', port))        
print ("socket binded to %s" %(port))
f=open("hi.txt","r").read()
s.listen(5)     
print ("socket is listening")
while True:
   c, addr = s.accept()     
   print ('Got connection from', addr)
   print (c.recv(1024).decode('ascii'))
   c.sendall(str.encode(f))
   c.close()
