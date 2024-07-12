/////////////////未完成//////////////////////

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> A(100), B(100), C(100), D(100);
    vector<vector<int>> result(100, vector<int>(100, 0));
    for(int i = 0; i < N; i++){
        cin >> A[i] >> B[i] >> C[i] >> D[i];
        for(int j = A[i]; j < B[i]; j++){
            for(int k = C[i]; k < D[i]; k++){
                result[j][k] = 1;
            }
        }
    }
    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << result[i][j];
            if(result[i][j] == 1){
                count += 1;
            }
        }
    }
    cout << count << endl;
}