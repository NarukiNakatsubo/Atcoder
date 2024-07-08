W, H, N = map(int, input().split())

W_x_1 = 0
W_x_2 = W
H_y_1 = 0
H_y_2 = H
for _ in range(N):
  x, y, a = map(int, input().split())
  if(a == 1):
    if(W_x_1 < x):
        W_x_1 = x
  elif(a == 2):
    if(W_x_2 > x):
      W_x_2 = x
  elif(a == 3):
    if(H_y_1 < y):
      H_y_1 = y
  elif(a == 4):
    if(H_y_2 > y):
      H_y_2 = y

if((W_x_1 - W_x_2 >= 0 and W_x_2 < W) or W_x_1 == W):
  print(0)
elif((H_y_1 - H_y_2 >= 0 and H_y_2 == H) or H_y_1 == W):
  print(0)
else:
    print((W - W_x_1 - (W - W_x_2)) * (H - (H - H_y_2) - H_y_1))