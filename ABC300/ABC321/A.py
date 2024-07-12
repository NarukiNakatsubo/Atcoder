N = input()
length = int(len(N))
N = int(N)

while (length != 1):
  if (N // pow(10, length - 1) > (N % pow(10, length - 1)) // pow(10, length - 2)):
    N = N % pow(10, length - 1)
    length -= 1
    continue
  else:
    print('No')
    break
if (length == 1):
  print('Yes')
