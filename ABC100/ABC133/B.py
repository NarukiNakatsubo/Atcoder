import math

N, D = map(int, input().split())

X = [input().split() for l in range(N)]

result = 0
number = 0
for i in range(0, N - 1):
    for j in range(i + 1, N):
      for k in range(D):
        result += pow(abs(int(X[i][k]) - int(X[j][k])), 2)
      if(math.sqrt(result).is_integer()):
        number += 1
      result = 0
   
print(number)

