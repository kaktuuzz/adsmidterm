class Node:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next

n = int(input())
head = None

for x in map(int, input().split()):
    head = Node(x, head)

prev = None
cur = head

while cur:
    nxt = cur.next
    cur.next = prev
    prev = cur
    cur = nxt

head = prev

while head:
    print(head.val, end=" ")
    head = head.next