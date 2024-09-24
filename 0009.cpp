#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n[3];
    char str[4];
    for(int i=0 ; i<3 ; i++)
        cin >> n[i];
    cin >> str;
    sort(n,n+3);
    for(int i=0 ; i<3 ; i++)
        printf("%d ",n[str[i] - 'A']);
}