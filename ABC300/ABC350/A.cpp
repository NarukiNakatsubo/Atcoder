#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int sum;
  
  cin >> S;
  
  sum = stoi(S.substr(3, 3)); // 3番目の文字から3文字取り出して整数に変換して合計を求める
  
  if(sum <= 349 && sum != 316 && sum != 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  
} 

