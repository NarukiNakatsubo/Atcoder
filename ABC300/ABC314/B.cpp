#include <bits/stdc++.h>
using namespace std;

int main(){
    // N:人・X:出目
    int N, X;
    cin >> N;
    // 人が賭けた目の数
    vector<int> C(N);
    // 人が賭けた目
    vector<vector<int>> A(N, vector<int>(38));
    for(int i = 0; i < N; i++){
        cin >> C[i];
        for(int j = 0; j < C[i]; j++){
            cin >> A[i][j];
        }
    }
    cin >> X;
    ////////////////////
    map<int, int> result{};
    int count = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < C[i]; j++){
            if(A[i][j] == X){
                result[i] = C[i];
                count += 1;
            }
            if(count == 0){
                result[i] = 0;
            }
        }
        count = 0;
    }
    ///////////////////
    count = 0;
    int min = 40;
    for(int i = 0; i < N; i++){
        if(min > result[i] and result[i] != 0){
            min = result[i];
        }
    }
    vector<int> judge;
    for(int i = 0; i < N; i++){
        if(min == result[i]){
            judge.push_back(i);
            count += 1;
        }
    }

    if(min == 40){
        cout << 0 << endl;
    }else{
        cout << count << endl;
        for(int i = 0; i < count; i++){
            cout << judge[i] + 1 << ' ';
        }
    }
}