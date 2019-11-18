import socket
import time
p = 19
g = 7
a = 8
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)         
port = 12345               
s.connect(('127.0.0.1', port))
s.send(str.encode(str(p)))
time.sleep(1)
s.send(str.encode(str(g)))
time.sleep(1)
A = pow(g,a)%p
s.sendall(str.encode(str(A)))


sb = int(s.recv(1024).decode('ascii'))
print(sb)
ad = pow(sb,a) % p
print(ad)
s.close()
