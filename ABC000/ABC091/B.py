N = int(input())
s = [input() for _ in range(N)]
M = int(input())
t = [input() for _ in range(M)]

bucket_N = {} 
bucket_M = {}
for i in s:
    bucket_N[i] = 0
for i in t:
    bucket_M[i] = 0
for i in s:
  bucket_N[i] += 1
for i in t:
  bucket_M[i] += 1

bucket = {} 
for i in s:
    bucket[i] = 0
for i in s:
  for j in t:
    if(i == j):
      bucket[i] = bucket_N[i] - bucket_M[j]
      break
    else:
        bucket[i] = bucket_N[i]
for i in s:
    bucket_N[i] = bucket[i]

result = 0
for i in s:
  if(result < bucket_N[i]):
    result = bucket_N[i]

print(result)
      
      