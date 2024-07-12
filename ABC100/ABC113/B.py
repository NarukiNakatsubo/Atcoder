N = int(input())
T, A = map(int, input().split())
H = list(map(int, input().split()))

start_high = abs(A - (T - H[0] * 0.006))
number = 1
for i in range(1, N):
  max_high = abs(A - (T - H[i] * 0.006))
  if(start_high > max_high):
    start_high = max_high
    number = i + 1
    
print(number)