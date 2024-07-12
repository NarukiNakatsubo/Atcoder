#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  vector<int> P;
  int Q;
  int A, B;
  vector<int> result;
  
  cin >> N;
  
  int num;
  cin.ignore();
  string line;
  getline(cin, line);
  istringstream iss(line);
  while(iss >> num){
    P.push_back(num);
  }
  
  cin >> Q;
  for(int i = 0; i < Q; i++){
    cin >> A >> B;
    for(int j = 0; j < N; j++){
      if(A == P[j]){
        result.push_back(A);
        break;
      }else if(B == P[j]){
        result.push_back(B);
        break;
      }
    }
  }
  
  for(int i = 0; i < Q; i++){
    cout << result[i] << endl;
  }
}
