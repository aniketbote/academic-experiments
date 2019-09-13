import socket
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
print('created')
port = 12345
s.bind(('',port))
s.listen(5)
print('listening')


b=10
while True:
    c,addr = s.accept()
    cp = int(c.recv(1024).decode('ascii'))
    cg = int(c.recv(1024).decode('ascii'))
    ca = int(c.recv(1024).decode('ascii'))
    B = pow(cg,b) %cp
    c.sendall(str.encode(str(B)))
    bd = pow(ca,b) % cp
    print(bd)
    c.close()
