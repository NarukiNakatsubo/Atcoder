#include <bits/stdc++.h>
using namespace std;

int main(){
  int N, l, r;
  int result = 0;
  cin >> N;
  
  for(int i = 0; i < N; i++){
    cin >> l >> r;
    result += r - l + 1;
  }
  
  cout << result << endl;
}