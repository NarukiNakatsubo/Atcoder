N = int(input())
list_W = []
list_X = []
for _ in range(N):
  W, X = map(int, input().split())
  list_W.append(W)
  list_X.append(X)

count = 0
result = 0
for i in range(25):
  for j in range(N):
    if(list_X[j] + i >= 24):
        list_X[j] -= 24
    if(9 <= list_X[j] + i < 18):
      count += list_W[j]
  result = max(result, count)  
  count = 0

print(result)