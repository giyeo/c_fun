stackA = []
stackB = []

sequences = [
[1,2,3,4,5,1,2,3,4,5],
[1,2,3,4,5,1,2,3,5,4],
[1,2,3,4,5,6,7,8,9,0]
]

for sequence in sequences:
    stackA.clear()
    stackB.clear()
    for n in sequence:
    
        if not stackB:
            stackB.append(n)
            continue
    
        stackA.append(n)
    
        lenA = len(stackA)
    
        #print(stackA, '\n', stackB)
        if(len(stackB) < len(stackA)):
            print(stackA, stackB)
        if(stackA[lenA - 1] != stackB[lenA - 1]):
            stackB.extend(stackA)
            stackA.clear()

        if(len(stackA) == len(stackB)):
            print("cycle detected")
            print(stackA)
            print(stackB)
            break
