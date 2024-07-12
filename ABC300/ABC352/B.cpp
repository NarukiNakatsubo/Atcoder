#include <bits/stdc++.h>
using namespace std;

int main(){
  string S, T;
  vector<int> result;
  int count = 0;
  cin >> S; //正解の文字列
  cin >> T; //誤った文字列
  
  
  for(int i = 0; i < T.size(); i++){
    if(S[count] == T[i]){
      result.push_back(i + 1);
      count++;
    }
  }
  
  //要素を一行で出力
  for(int i = 0; i < S.size(); i++){
    cout << result[i] << " ";
  }
  
}