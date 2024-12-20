class Node:
    def __init__(self, freq, data):
        self.freq = freq
        self.data = data
        self.left = None
        self.right = None

class PrintTreeNode:
    def __init__(self, level, data, freq):
        self.level = level
        self.data = data
        self.freq = freq
    

def printTree(array: list):
        current_level = 0
        
        for each in array:
            if not isinstance(each, PrintTreeNode):
                raise ValueError("not good")
            if each.level != current_level:
                current_level += 1
                print("")
            print("[",each.data,",",each.freq,"]", end=" ")



from collections import deque

def preorder_transversal(root: Node):
    if not root:
        return
    print(root.freq, root.data)
    preorder_transversal(root.left)
    preorder_transversal(root.right)

def get_level(i):
    l = 0
    while i > (2 ** l) - 2:
        l += 1
    return l - 1


def order_level_transversal(root: Node):
    deq = deque([root])
    i = 0
    ptn = []

    while deq:
        current = deq.popleft()
        ptn.append(PrintTreeNode(get_level(i), current.data, current.freq))
        if current.left:
            deq.append(current.left)
        if current.right:
            deq.append(current.right)
        i += 1
    printTree(ptn)

    


