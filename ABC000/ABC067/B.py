N, K = map(int, input().split())
l = list(map(int, input().split()))
l.sort()
l.reverse()

max_length = 0
for j in range(K):
    max_length += l[j]

print(max_length)