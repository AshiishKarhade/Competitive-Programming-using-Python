
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

def even_after_odd(head):
    if head is None:
        return head
    
    even_head = None                    
    even_tail = None
    odd_head = None
    odd_tail = None
    
    current = head 

    while current:
        next_node = current.next 
        
        if current.data % 2 == 0: 
            if even_head is None:   
                even_head = current   
                even_tail = even_head     
            else:
                even_tail.next = current
                even_tail = even_tail.next
        else:
            if odd_head is None:
                odd_head = current
                odd_tail = odd_head
            else:
                odd_tail.next = current
                odd_tail = odd_tail.next
        current.next = None
        current = next_node 
        
    if odd_head is None:            
        return even_head

    odd_tail.next = even_head      
    return odd_head