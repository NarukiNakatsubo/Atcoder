N = int(input())

max_min = 0
result = 10000
for i in range(1, pow(10, 7)):
  if(N % i == 0):
    B = N // i
    if(len(str(B)) > len(str(i))):
      max_min = len(str(B))
    else:
      max_min = len(str(i))
    result = min(result, max_min)

print(result)