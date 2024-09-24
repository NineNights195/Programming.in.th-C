#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    char ch[51];
    int n[3]={0,1,2};
    cin >> ch;
    for(int i=0 ; ch[i]!='\0' ; i++)
        if(ch[i]=='A')
            swap(n[0],n[1]);
        else
            if(ch[i]=='B')
                swap(n[1],n[2]);
            else
                if(ch[i]=='C')
                    swap(n[2],n[0]);
    for (int i=1; i<=3 ; i++)
        if(n[i-1]==0)
            cout << i;
}