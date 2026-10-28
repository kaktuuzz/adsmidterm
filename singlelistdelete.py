class Node:
    def __init__(self, val):
        self.val = val
        self.next = None


n = int(input())
a = list(map(int, input().split()))
x = int(input())

head = None
tail = None

for val in a:
    p = Node(val)

    if head is None:
        head = p
        tail = p
    else:
        tail.next = p
        tail = p

while head is not None and head.val == x:
    head = head.next

p = head

while p is not None and p.next is not None:
    if p.next.val == x:
        p.next = p.next.next
    else:
        p = p.next

p = head
result = []

while p is not None:
    result.append(str(p.val))
    p = p.next

print(" ".join(result))