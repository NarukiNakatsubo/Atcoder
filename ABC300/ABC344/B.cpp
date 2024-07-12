#include <bits/stdc++.h>
using namespace std;

int main(){
  int A;
  vector<int> result;
  
  while(1){
    cin >> A;
    result.push_back(A);
    if(A == 0){
      break;
    }
  }
  
  for(int i = result.size() - 1; i > -1; i--){
    cout << result[i] << endl;
  }
  
}