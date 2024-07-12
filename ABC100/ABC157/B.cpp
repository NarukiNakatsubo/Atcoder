#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> A(3, vector<int>(3));
    int N;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> A[i][j];
        }
    }
    cin >> N;
    vector<int> b(N);   
    for(int i = 0; i < N; i++){
        cin >> b[i];
    }

    //////////////////////////
    int count = 0;
    int judge = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                if(A[j][k] == b[i]){
                    A[j][k] = 0;
                }
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(A[i][j] == 0){
                count += 1;
            }
        }
        if(count == 3){
            judge = 1;
        }
        count = 0;
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(A[j][i] == 0){
                count += 1;
            }
        }
        if(count == 3){
            judge = 1;
        }
        count = 0;
    }

    for(int i = 0; i < 3; i++){
        if(A[i][i] == 0){
            count += 1;
        }
    }
    if(count == 3){
        judge = 1;
    }
    count = 0;

    if(A[0][2] == 0 and A[1][1] == 0 and A[2][0] == 0){
        judge = 1;
    }

    if(judge == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}