N = int(input())
A = list(map(int, input().split()))

judge = 0
for i in range(N - 1):
  for j in range(i + 1, N):
    if(A[i] != A[j]):
      judge += 1
      
if(judge > 0):
  print('No')
else:
  print('Yes')
  

