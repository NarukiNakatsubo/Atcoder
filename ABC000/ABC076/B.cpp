#include <bits/stdc++.h>
using namespace std;

int main(){
    int result = 1;
    int N, K;
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        if(result * 2 > K + result){
            result += K;
        }else{
            result *= 2;
        }
    }

    cout << result << endl;
}