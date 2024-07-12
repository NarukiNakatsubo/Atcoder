#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, count = 0;
    cin >> N;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());

    count = A[0];
    for(int i = 1; i < N; i++){
        count += 1;
        if(count != A[i]){
            break;
        }
    }

    cout << count << endl;
}