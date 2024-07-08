S = input()
List = list(S)

del List[0:5]

pick = List[0] + List[1] + List[2] + List[3] + List[4]

print('2018/' + pick)