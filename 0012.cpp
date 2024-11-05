#include<bits/stdc++.h>
using namespace std;

int main(){
    char al[999];
    cin >> al;

    // LINE 1
    for(int i=1 ; al[i-1]!='\0' ; i++){
        cout << ".";
        if(i%3==0){
            cout << ".*.";
        }else{
            cout << ".#.";
        }
    }
    cout << ".\n";

    // LINE 2
    for(int i=1 ; al[i-1]!='\0' ; i++){
        cout << ".";
        if(i%3==0){
            cout << "*.*";
        }else{
            cout << "#.#";
        }
    }
    cout << ".\n";

    // LINE 3
    int l,c=0;
    for(int i=1 ; al[i-1]!='\0' ; i++){
        if(i%3==0){
            cout << "*." << al[i-1] << ".*";
            c=1;
        }else{
            if(c==1){
                cout << "." << al[i-1] << ".";
                c=0;
            }else{
                cout << "#." << al[i-1] << ".";
            }
        }
        l=i;
    }
    if(l%3==0){
        cout << "\n";
    }else{
        cout << "#\n";
    }

    // LINE 4
    for(int i=1 ; al[i-1]!='\0' ; i++){
        cout << ".";
        if(i%3==0){
            cout << "*.*";
        }else{
            cout << "#.#";
        }
    }
    cout << ".\n";

    // LINE 5
    for(int i=1 ; al[i-1]!='\0' ; i++){
        cout << ".";
        if(i%3==0){
            cout << ".*.";
        }else{
            cout << ".#.";
        }
    }
    cout << ".";
}