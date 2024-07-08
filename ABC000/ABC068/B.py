N = int(input())
max_count = 0
count = 0
number_one = 1

for i in range(1, N + 1):
  number = i
  while(number % 2 == 0):
    count += 1
    number //= 2
  if(max_count < count):
    max_count = count
    number_one = i
  count = 0

print(number_one)