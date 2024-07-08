s = input()
List = list(s)
count = 0

for i in range(3):
  if(List[i] == "1"):
    count += 1

print(count)