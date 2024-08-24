#include<iostream>
#include<string>
using namespace std;

int main(){
    string n;
    int u=0,l=0;
    getline(cin,n);
    for(int i=0 ; i < n.length() ; i++){
        if(n[i] >= 65 && n[i] <= 90)
            u++;
        if(n[i] >= 97 && n[i] <= 122)
            l++;
    }
    if(u>0 && l>0) cout << "Mix";
    else if(l>0) cout << "All Small Letter";
    else cout << "All Capital Letter";
}