N, X = map(int, input().split())
List = []
for i in range(N):
  List.append(int(input()))
List.sort()

for j in range(N):
  X -= List[j]
result = N

while(X >= List[0]):
  X -= List[0]
  result += 1

print(result)