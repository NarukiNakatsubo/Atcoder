N, K = map(int, input().split())
A = list(map(int, input().split()))

bucket = [0] * (N + 1)
for i in A:
  bucket[i] += 1
  
count = 0
for i in range(1, N + 1):
  if(bucket[i] > 0):
    count += 1

list_count = []
for i in range(1, N + 1):
    if(bucket[i] > 0):
        list_count.append(bucket[i])
list_count.sort()

result = 0
if(count - K > 0):
  for i in range(count - K):
    result += list_count[i]
  print(result)
else:
  print(0)