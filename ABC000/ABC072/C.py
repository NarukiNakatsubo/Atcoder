N = int(input())

a = list(map(int, input().split()))


bucket = [0] * (pow(10, 5) + 1)
for i in a:
    if(i != 0):
        bucket[i - 1] += 1
    bucket[i] += 1
    bucket[i + 1] += 1

print(max(bucket))