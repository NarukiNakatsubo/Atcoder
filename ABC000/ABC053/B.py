s = input()
List = list(s)
start = 0
finish = 0

for i in range(len(s)):
  if(List[i] == 'A'):
    start = i
    break
for j in range(len(s) - 1, 0, -1):
  if(List[j] == 'Z'):
    finish = j
    break

print(finish - start + 1)