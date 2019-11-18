import socket               
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)         
print ("Socket successfully created")
port = 12345               
s.bind(('', port))        
print ("socket binded to %s" %(port))
s.listen(5)     
print ("socket is listening")

b = 10
while True:
   c, addr = s.accept()     
   #print ('Got connection from', addr)
   cp = int(c.recv(1024).decode('ascii'))
   cg = int(c.recv(1024).decode('ascii'))
   ca = int(c.recv(1024).decode('ascii'))
   #c.sendall(str.encode(f))
   B = pow(cg,b)%cp
   c.sendall(str.encode(str(B)))
   bd = pow(ca,b)%cp
   print(cp,cg,ca)
   print(bd)
   c.close()
