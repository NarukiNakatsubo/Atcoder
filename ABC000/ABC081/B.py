N = int(input())
A = list(map(int, input().split()))
count = 0
finish = 0

while(finish == 0):
  for i in range(N):
    if(A[i] % 2 != 0):
      finish += 1
  if(finish > 0):
    print(count)
  else:
    for j in range(N):
      A[j] = A[j] / 2
    count += 1