#include <bits/stdc++.h> 
using namespace std;

int main(){
    int judge = 0;
    string S;
    int A, B;
    cin >> A >> B >> S;
    if(S.size() == A + B + 1){
        if(S[A] == '-'){
            for(int i = 0; i < A; i++){
                if(isdigit(S[i])){
                }else{
                    cout << "No" << endl;
                    judge = 1;
                    break;
                }
            }
            if(judge != 1){
                for(int i = 0; i < B; i++){
                    if(isdigit(S[A + 1 + i])){
                    }else{
                        cout << "No" << endl;
                        judge = 2;
                        break;
                    }
                }
                if(judge != 2){
                    cout << "Yes" << endl;
                }
            }
        }else{
            cout << "No" << endl;
        }
    }else{
        cout << "No" << endl;
    }
}