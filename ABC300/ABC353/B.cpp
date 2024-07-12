#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  int count = 0;
  int judge = K;
  int result = 0;
  
  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  while(count != N){
    if(judge >= A[count]){
      judge -= A[count];
      count++;
    }else{
      judge = K;
      result++;
    }
  }
  if(judge != K){
    result++;
  }
  cout << result << endl;
}