#include <bits/stdc++.h>
using namespace std;

int main(){
    int count = 0;
    string S = "JNPGCZBUXHJAVWXGWIZAXTIQYMRRSSYDNUWCJYVZVZZCYZYKWUMOJNZYUJIKCWXUVDDNOYJDXYIXADXJYZNZTSNQDXGUBYSZPRCRPQYIPTXCSIHNZXWFWSQKVYOHWIZJYWZDQSLPIFXRYWYLXWWYDCBWIKJQGWSUXPHCORZXSXLWWOIZPIMQXCWVCMAYWKKPRNWAYYATXCHQCZKTIWIRLOZVQWKXZGYRZUQJXDJQQYMYLNBZXWWMJXPZXKYPGWRETBPPDHUMQMKNUYHFGQKHMYKJKWYTIBZSTOZFHLQVYXLGCNIEXQFAGBWAFMXSWXTCWZKXSAXUZFLUYPWIGKWYUDTOOYYWZYQZXDVJSYSTGJWXNZGZOZSZCXCHZERWCIWYTIPQRWXZWCYYQYUWTNGZXZUBYKYVZWPEKOYZNWKYGPOYXLTWYYTAFYXPXXQWCWSZLMXRGKVCCWLANWWCBZYWLIRYGJRHMKWVBWXWGRLETQNZHYAQUTZK";
    vector<string> result(500);
    for(int i = 0; i < 500; i++){
        if(S[i] == 'W'){
        }else if(S[i] == 'X' and S[i + 3] != 'X'){
            S[i + 3] = 'E';
            result[count] = 'X';
            count += 1;
        }else if(S[i] == 'Y' and S[i + 1] == 'Z'){
            result[count] = 'E';
            S[i + 1] = 'W';
            count += 1;
        }else{
            result[count] = S[i];
            count += 1;
        }
    }
    for(int i = 226; i < 231; i++){
        cout << result[i] << endl;
    }
}
