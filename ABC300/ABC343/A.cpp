#include<bits/stdc++.h>
using namespace std;

int main(){
  int A, B;
  int result;
  
  cin >> A >> B;
  
  result = A + B;
  
  for(int i = 0; i < 10; i++){
    if(result != i){
      cout << i << endl;
      break;
    }
  }
  
}