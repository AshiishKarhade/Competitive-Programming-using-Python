# Stack using lists(Arrays)
class Stack:
    def __init__(self):
        self.items = []
    def push(self, data):
        self.items.append(data)
    def pop(self):
        return self.items.pop()
    def max_elements(self):
        print(max(self.items))
            

N = int(input())
stack = Stack()
for n in range(N):
    m = list(map(int,input().split()))
    #print(m)
    if m[0] == 1:
        #data = int(input())
        # push data
        stack.push(m[1])
    elif m[0] == 2:
        # pop from stack
        stack.pop()
    elif m[0] == 3:
        #max element of stack
        stack.max_elements()
    else:
        pass