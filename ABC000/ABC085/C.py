N, Y = map(int, input().split())

top = 0
middle = 0
low = 0
for i in range(N + 1):
  for j in range(N + 1):
      if(i + j > N):
        break
      if(10000 * i + 5000 * j + 1000 * (N - i - j) == Y):
        top = i
        middle = j
        low = N - i - j
    
if(top == 0 and middle == 0 and low == 0):
     print(f"-1 -1 -1")  
else:
    print(f"{top} {middle} {low}")
 
 