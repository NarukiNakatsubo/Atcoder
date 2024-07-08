S = input()
S_list = list(S)

bucket = [0] * 26

for i in range(len(S_list)):
    bucket[ord(S_list[i]) - ord('a')] += 1

for i in range(26):
  if(bucket[i] == 0):
    print(chr(i + 97))
    break
  elif(i == 25):
    print('None')