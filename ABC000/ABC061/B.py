N, M = map(int, input().split())
list_a = []
list_b = []
for _ in range(M):
  a, b = map(int, input().split())
  list_a.append(a)
  list_b.append(b)

bucket = [0] * N
for i in list_a:
  bucket[i - 1] += 1
for i in list_b:
  bucket[i - 1] += 1
  
for i in range(N):
  print(bucket[i])