#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;

    if(A == 7 and B == 5 and C == 5){
        cout << "YES" << endl;
    }else if(A == 5 and B == 7 and C == 5){
        cout << "YES" << endl;
    }else if(A == 5 and B == 5 and C == 7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}