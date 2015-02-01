# A queue implementation using Python list


class Queue(object):

    """Queue DS using List"""

    def __init__(self):
        self.q = []

    def enqueue(self, element):
        self.q.append(element)

    def dequeue(self):
        return self.q.pop()

    def sizeof(self):
        return len(self.q)

    def show(self):
    	print ([x for x in self.q])
