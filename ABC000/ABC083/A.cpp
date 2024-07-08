#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, C, D;
  int left, right;
  
  cin >> A >> B >> C >> D;
  
  left = A + B;
  right = C + D;
  
  if (left > right){
    cout << "Left" << endl;
  }else if (left == right){
    cout << "Balanced" << endl;
  }else{
    cout << "Right" << endl;
  }
}