from common import Node

def decodeHuff(root, s):
    
    current = root
    for binary in s:
        if binary == '0':
            current = current.left
        else:
            current = current.right
        if current.left is None and current.right is None:
            print(current.data, end="")
            current = root