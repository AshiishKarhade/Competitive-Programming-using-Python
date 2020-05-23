class Node:
    def __init__(self, value=None):
        self.value = value
        self.left = None
        self.right = None
        
    def get_value(self):
        return self.value
    
    def set_value(self, value):
        self.value = value
        
    def set_left_child(self, value):
        self.left = value
    
    def set_right_child(self, value):
        self.right = value
    
    def get_left_child(self):
        return self.left
    
    def get_right_child(self):
        return self.right
    
    def has_left_child(self):
        if self.left is None:
            return False
        else:
            return True
    
    def has_right_child(self):
        if self.right is None:
            return False
        else:
            return True


class Tree:
    def __init__(self, value):
        self.root = Node(value)
        
    def get_root(self):
        return self.root