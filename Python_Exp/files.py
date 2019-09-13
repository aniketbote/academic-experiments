import os
def find(name="File_A.txt", path="D:\Aniket"):
    for root, dirs, files in os.walk(path):
        if name in files:
            return os.path.join(root, name)

p=find()
print(p)