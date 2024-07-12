#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  
  char A = S[0];
  char B = S[1];
  
  int result;
  if(A == B){
    for(int i = 2; i < S.size(); i++){
      if(A != S[i]){
        result = i + 1;
        break;
      }
    }
  }else{
    if(A == S[2]){
      result = 2;
    }else{
      result = 1;
    }
  }
  
  cout << result << endl;
  
  
}