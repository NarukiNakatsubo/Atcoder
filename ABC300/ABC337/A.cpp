#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  int X, Y;
  int Takahashi = 0, Aoki = 0;
  
  cin >> N;
  for(int i = 0; i < N; i++){
    cin >> X >> Y;
    Takahashi += X;
    Aoki += Y;
  }
  
  if(Takahashi > Aoki){
    cout << "Takahashi" << endl;
  }else if(Takahashi == Aoki){
    cout << "Draw" << endl;
  }else{
    cout << "Aoki" << endl;
  }
}