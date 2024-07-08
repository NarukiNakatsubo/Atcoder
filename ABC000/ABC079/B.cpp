#include <bits/stdc++.h> 
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<long long>result(N + 1);
    result[0] = 2;
    result[1] = 1;
    for(int i = 2; i < N + 1; i++){
        result[i] = result[i - 1] + result[i - 2]; 
    }

    cout << result[N] << endl;
}