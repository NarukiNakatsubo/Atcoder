N = int(input())

count = 0
for i in range(300):
  if(pow(3, i) > N):
    break
  for j in range(100):
    if(pow(2, j) > N):
      break
    if(N == pow(2, j) * pow(3, i)):
      count = 1

if(count == 1):
  print('Yes')
else:
  print('No')
    