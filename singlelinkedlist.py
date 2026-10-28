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

slow = fast = head

while fast and fast.next:
    slow = slow.next
    fast = fast.next.next

print(slow.value)