N = int(input())
d = [int(input()) for i in range(N)]

bucket = [0] * 101
for i in d:
  bucket[i] += 1

count = 0
for i in range(1, 101):
  if(bucket[i] >= 1):
    count += 1

print(count)