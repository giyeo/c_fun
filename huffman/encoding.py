from common import *
from collections import deque

def build_huffman_tree(s):
    frequency = {}
    for c in s:
        if c not in frequency:
            frequency[c] = 1
        else:
            frequency[c] += 1
    
    sorted_by_values_desc = dict(sorted(frequency.items(), key=lambda item: item[1]))
    print(sorted_by_values_desc)

    deq = deque(sorted_by_values_desc)
    tree = None
    while deq:
        if not tree:
            tree = Node(None, None)
            char = deq.popleft()
            tree.right = Node(frequency[char], char)
            char = deq.popleft()
            tree.left = Node(frequency[char], char)
            if (tree.left.freq > tree.right.freq):
                tree.left, tree.right = tree.right, tree.left
            tree.freq = tree.left.freq + tree.right.freq
            continue
        newTree = Node(None, None)
        char = deq.popleft()
        newTree.left = tree
        newTree.right = Node(frequency[char], char)
        newTree.freq = newTree.left.freq + newTree.right.freq
        tree = newTree
        if (tree.left.freq > tree.right.freq):
                tree.left, tree.right = tree.right, tree.left
        
    return tree






