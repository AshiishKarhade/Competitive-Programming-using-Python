# Here is our Stack Class

class Stack:
    def __init__(self):
        self.items = []
    def size(self):
        return len(self.items)
    def push(self, item):
        self.items.append(item)
    def pop(self):
        if self.size()==0:
            return None
        else:
            return self.items.pop()
    def top(self):
        return self.items[0]
class Queue:
    def __init__(self):
        self.stack = Stack()
    def size(self):
        return self.stack.size()
    def enqueue(self, item):
        self.stack.push(item)
    def peek(self):
        return self.stack.top()
    def dequeue(self):
        temp_stack = Stack()
        temp_stack_second = Stack()
        for i in range(self.size()-1):
            temp_stack.push(self.stack.pop())
        for i in range(temp_stack.size()):
            temp_stack_second.push(temp_stack.pop())
        dequeued_value = self.stack.pop()
        self.stack = temp_stack_second
        return dequeued_value

N = int(input())
queue = Queue()
for _ in range(N):
    q = list(map(int, input().split()))
    print(q)
    if q[0] == 1:
        queue.enqueue(q[1])
    elif q[0] == 2:
        queue.dequeue()
    elif q[2] == 3:
        print(queue.peek())
