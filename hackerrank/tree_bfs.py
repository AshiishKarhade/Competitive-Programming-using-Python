# BFS algorithm
def bfs(tree):
    q = Queue()
    visited = list()
    node = tree.get_root()
    q.enq(node)
    while len(q) > 0:
        node = q.deq()
        visited.append(node.get_value())
        if node.has_left_child():
            q.enq(node.get_left_child())
        if node.has_right_child():
            q.enq(node.get_right_child())
    return visited