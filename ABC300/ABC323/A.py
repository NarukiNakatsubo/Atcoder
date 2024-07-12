S = input()
List = list(S)
result = 0

for i in range(1, 16, 2):
  if(List[i] == '1'):
    result += 1

if(result > 0):
  print('No')
else:
  print('Yes')
  
  