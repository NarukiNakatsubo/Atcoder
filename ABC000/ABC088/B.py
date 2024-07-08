N = int(input())
a = list(map(int, input().split()))
a.sort()
a.reverse()

Alice = 0
Bob = 0
for j in range(N // 2):
    Alice += a.pop(0)
    Bob += a.pop(0)
if(N % 2 != 0):
    Alice += a[0]

print(Alice - Bob)
