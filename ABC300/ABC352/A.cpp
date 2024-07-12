#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, X, Y, Z;
  cin >> N >> X >> Y >> Z;
  
  if(X < Z && Y > Z){
    cout << "Yes" << endl;
  }else if(X > Z && Y < Z){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}