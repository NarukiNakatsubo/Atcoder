#include <bits/stdc++.h>
using namespace std;

int main(){
    int result = 0;
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    // ソート
    sort(a.begin(), a.end());
    for(int i = 0; i < N - 1; i++){
        result += a[i + 1] - a[i];
    }
    cout << result << endl;
}