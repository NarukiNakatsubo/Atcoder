N = int(input())

count = 0
for i in range(0, 25):
  for j in range(0, 14):
    if(N == i * 4 +  j * 7):
      count += 1
      
if(count >= 1):
  print('Yes')
else:
  print('No')