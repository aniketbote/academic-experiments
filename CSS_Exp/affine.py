def encrypt(text,m,a):
    result = ''
    for i in range(len(text)):
        char = text[i]
        if char == ' ':
            result += ' '
        elif char.isupper():
            result += chr((((ord(char)-65) * m + a) % 26) + 65)
        else:
            result += chr((((ord(char)-97) * m + a) % 26) + 97)
    return result
def decrypt(text,a):
    result =''
    for i in range(26):
        x = (a*i) % 26
        if x  == 1:
            ainv = x
            print(x)
    for k in range(len(text)):
        char = text[k]
        if char == ' ':
            result += ' '
        elif char.isupper():
            result += chr(((ord(char)-65)-a*ainv) %26 + 65)
        else:
            result += chr(((ord(char)-97)-a*ainv) %26 + 97)
    return result
        
text = 'AFFINE CIPHER'
m = 17
a = 20
s = encrypt(text,m,a)
print(decrypt(s,a))
