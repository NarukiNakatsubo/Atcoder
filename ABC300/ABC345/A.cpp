#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  int result = 0;
  
  cin >> S;
  
  if(S[0] == '<' && S[S.size() - 1] == '>'){
    for(int i = 1; i < S.size() - 1; i++){
      if(S[i] != '='){
        cout << "No" << endl;
        result = 0;
        break;
      }else{
        result++;
      }
    }
  }else{
    cout << "No" << endl;
  }
  
  if(result != 0){
    cout << "Yes" << endl;
  }
}