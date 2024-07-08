s = input()
List = list(s)
odd_list = []

for i in range(0, len(s), 2):
  odd_list.append(List[i])
  
print(''.join(odd_list))
  