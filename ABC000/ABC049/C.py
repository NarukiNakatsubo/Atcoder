S = input()
S_list = list(S)
S_list.reverse()

finish = 0
while(len(S_list) >= finish):
    if(''.join(S_list[finish:finish + 5]) == 'maerd' or ''.join(S_list[finish:finish + 5]) == 'esare'):
        finish += 5
    elif(''.join(S_list[finish:finish + 6]) == 'resare'):
        finish += 6
    elif(''.join(S_list[finish:finish + 7]) == 'remaerd'):
        finish += 7
    else:
        break
        
if(len(S_list) <= finish):
    print('YES')
else:
    print('NO')