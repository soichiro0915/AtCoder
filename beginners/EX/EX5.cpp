#include <bits/stdc++.h>
using namespace std;
 
vector<int> search_place(string code){
    vector<int> alphabet_place;
    for(int i = 0; i < code.size(); i++){
        if(code[i] >= 'a' && code[i] <= 'z'){
            alphabet_place.push_back(i);
        }
        
        if(i == code.size() -1){
            alphabet_place.push_back(code.size() );
        }
    }
    return alphabet_place;
}

char crack(string str){
    char initial = str[0]; //頭文字も取り出す
    int64_t num = stoll(str.substr(1)); //数字の部分を取り出し数値化
    
    //アルファベットを入れた配列alphabetを作る,最初に０を入れてaが１番目、zが26番目とする
    string alphabet = "0abcdefghijklmnopqrstuvwxyz";
    
    //頭文字がalphabetの中で何番目なのか調べる
    int ini_num;
    for(int i = 1; i <= 26; i++){
        if (initial == alphabet[i]){
            ini_num = i;
            break;
        }
    }
    
    int ans_num;
    num = num % 26; 
    if (num % 2 == 0){
        if(ini_num + num > 26){
            ans_num = num + ini_num -26;
        }
        else ans_num = num + ini_num;
    }
    else{
        if(ini_num - num < 0){
            ans_num = 26 + (ini_num - num);
        }
        else ans_num = ini_num -num;
    }
    cout << alphabet[ans_num];
}

int main() {
    string code;
    cin >> code;
    
    vector<int> place = search_place(code);
    int first = 0;
    for(int i = 0; i < place.size(); i++){
        string code_split;
        for(int j = first; j < place[i]; j++){
            code_split.push_back(code[j]);
        }
        crack(code_split);
        first = place[i];
    }
}