from hashlib import md5
from hashlib import sha1

s = 'aniket'

result = md5(s.encode())
result1 = sha1(s.encode())
print(result.hexdigest())
print(result1.hexdigest())
