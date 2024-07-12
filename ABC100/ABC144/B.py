N = int(input())

judge_number = 0
for i in range(1, 10):
  for j in range(1, 10):
    if(N == i*j):
      judge_number = 1
if(judge_number == 1):
  print('Yes')
else:
  print('No')