#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int count;
  
  cin >> S;  
  
  for(int i = 0; i < S.size(); i++){
    if(S[i] == '.'){
      count = i;
    }
  }
  for(int j = count + 1; j < S.size(); j++){
    cout << S[j];
  }
}