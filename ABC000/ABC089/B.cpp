#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int judge = 0;
  string S;
  
  cin >> N;
  
  for (int i = 0; i < N; i++){
    cin >> S;
    if(S == "Y"){
      judge = 1;
    }
  }
  
  if(judge == 1){
    cout << "Four" << endl;
  }else{
    cout << "Three" << endl;
  }
  
}