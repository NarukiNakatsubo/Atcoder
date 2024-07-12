N = int(input())
L = list(map(int, input().split()))

count = 0
if(N >= 3):
  for i in range(N - 2):
    for j in range(i + 1, N - 1):
      for k in range(j + 1, N):
        if(L[i] != L[j] and L[i] != L[k] and L[j] != L[k]):
          if(L[i] + L[j] > L[k] and L[i] + L[k] > L[j] and L[j] + L[k] > L[i]):
            if(i < j < k):
              count += 1
  print(count)
else:
  print(0)