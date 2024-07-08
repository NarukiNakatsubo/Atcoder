#include <bits/stdc++.h> 
using namespace std;

int main(){
    int result = 0;
    int N, K;
    cin >> N;
    vector<int> x(N);
    cin >> K;
    for(int i = 0; i< N; i++){
        cin >> x[i];
        if(abs(x[i] - K) > x[i]){
            result += 2 * x[i];
        }else{
            result += 2 * abs(x[i] - K);
        }
    }
    cout << result << endl;
}