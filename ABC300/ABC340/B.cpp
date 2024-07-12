#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int> A;
  int Q;
  int value, query;
  vector<int> result;
  
  cin >> Q;
  int count = 0;
  for (int i = 0; i < Q; i++){
    cin >> value >> query;
    if (value == 1){
      A.push_back(query);
    }else{
      result.push_back(A[A.size() - query]);
      count++;
    }
  }
  
  for(int i = 0; i < count; i++){
    cout << result[i] << endl;
  }
}