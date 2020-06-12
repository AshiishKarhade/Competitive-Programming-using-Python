class Heap:
    def __init__(self, initial_size):
        self.cbt = [None for _ in range(initial_size)]        # initialize arrays
        self.next_index = 0 # denotes next index where new element should go
    
    def _up_heapify(self):
        index = self.next_index
        while True:
            prnt_idx = (index-1)//2
            if self.cbt[index] > self.cbt[prnt_idx]: #child node bigger than parent node
                self.cbt[index], self.cbt[prnt_idx] = self.cbt[prnt_idx], self.cbt[index]
            else:
                break               
    def insert(self, data):
        """
        Insert `data` into the heap
        """
        if self.next_index == 0:
            self.cbt[self.next_index] = data
            self.next_index += 1
        else:
            self.cbt[self.next_index] = data
            self._up_heapify()
            self.next_index += 1
            
        if self.next_index >= len(self.cbt):
            temp = self.cbt
            self.cbt = [None for _ in range(2 * len(self.cbt))]
            for index in range(self.next_index):
                self.cbt[index] = temp[index]