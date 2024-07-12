#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  string result;
  
  cin >> S;
  
  for(int i = 0; i < S.size(); i++){
    if(S[i] != '|'){
      result.push_back(S[i]);
    }else{
      i++;
      while(S[i] != '|'){
        i++;
      }
    }
  }
  
  cout << result << endl;
}