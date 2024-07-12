#include <bits/stdc++.h>
using namespace std;

int main(){
  string S;
  cin >> S;
  
  int result_1 = 0;
  if(S[0] >= 'A' && S[0] <= 'Z'){
    result_1++;
  }
  int result_2 = 0;
  for(int i = 1; i < S.size(); i++){
    if('a' <= S[i] && S[i] <= 'z'){
      result_2++;
    }else{
      result_2 = -1;
      break;
    }
  }
  if(result_1 == 1 && result_2 >= 0){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}