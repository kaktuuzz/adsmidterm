n = int(input())
a = list(map(int, input().split()))

tree = {}

for x in a:
    if x not in tree:
        tree[x] = [None, None]
        continue

    cur = a[0]

    while True:
        if x < cur:
            if tree[cur][0] is None:
                tree[cur][0] = x
                tree[x] = [None, None]
                break
            cur = tree[cur][0]
        else:
            if tree[cur][1] is None:
                tree[cur][1] = x
                tree[x] = [None, None]
                break
            cur = tree[cur][1]

def height(x):
    if x is None:
        return 0
    return 1 + max(height(tree[x][0]), height(tree[x][1]))

print(height(a[0]) if n > 0 else 0)