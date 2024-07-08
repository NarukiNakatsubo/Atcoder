N = int(input())
A = int(input())

money = N % 500

if(money - A <= 0):
  print("Yes")
else:
  print("No")