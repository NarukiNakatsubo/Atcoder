#include <bits/stdc++.h>
using namespace std;

int main(){
    int result = 0;
    int N;
    cin >> N;
    int judge = N;
    while(judge){
        result += judge % 10;
        judge /= 10;
    }
    if(N % result == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}