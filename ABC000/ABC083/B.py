N, A, B = map(int, input().split())

count = 0
result = 0
for i in range(1, N + 1):
  number = i
  for j in range(len(str(i))):
    count += number % 10
    number //= 10
  if(A <= count <= B):
    result += i
  count = 0

print(result)