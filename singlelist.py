class Node:
    def __init__(self, value):
        self.value = value
        self.next = None

n = int(input())
a = list(map(int, input().split()))

head = tail = None

for x in a:
    node = Node(x)

    if head is None:
        head = tail = node
    else:
        tail.next = node
        tail = node

x = int(input())

while head and head.value == x:
    head = head.next

cur = head

while cur and cur.next:
    if cur.next.value == x:
        cur.next = cur.next.next
    else:
        cur = cur.next

cur = head

while cur:
    print(cur.value, end=" ")
    cur = cur.next