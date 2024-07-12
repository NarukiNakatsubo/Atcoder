#include <bits/stdc++.h>
using namespace std;

int main(){
    int M, count = 0, result = 0, judge = 0, check = 0;
    cin >> M;
    vector<int> D(M);
    for(int i = 0; i < M; i++){
        cin >> D[i];
        count += D[i];
    }
    result = (count + 1) / 2;

    count = 0;
    for(int i = 0; i < M; i++){
        count += 1;
        judge += D[i];
        if(judge >= result){
            judge -= D[i];
            for(int j = 1; j <= D[i]; j++){
                if(result - judge == j){
                    result = j;
                    check = 1;
                }
            }
        }
        if(check == 1){
            break;
        }
    }
    cout << count << ' ' << result << endl;
}