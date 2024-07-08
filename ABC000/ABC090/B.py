A, B = map(int, input().split())

count = 0
for i in range(A, B + 1):
  st = str(i)
  List = list(st)
  List_reversed = list(reversed(List))
  if(List[0:len(st)] == List_reversed[0:len(st)]):
    count += 1
    
print(count)