#include <bits/stdc++.h>
using namespace std;

int main(){
  int A, B, D;
  vector<int> result;
  
  cin >> A >> B >> D;
  
  int i = 0;
  while(A <= B){
    result.push_back(A);
    i++;
    A += D;
  }
  
  for(int j = 0; j <= i - 1; j++){
    cout << result[j] << " "; 
  }
  
}