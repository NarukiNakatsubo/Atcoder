N, X = map(int, input().split())
A = list(map(int, input().split()))
A.sort()

if(N - 3 == 0):
  if(A[0] < X <= A[1]):
    print(X)
  elif(A[0] >= X):
    print(0)
  else:
    print(-1)
else:
  C = 0
  for i in range(N - 3):
    C += A[i + 1]
  B = X - C 
  if(B > 100 or B > A[-1]):
    print(-1)
  elif(B <= A[0] or B < 0):
    print(0)
  else:
    print(B)