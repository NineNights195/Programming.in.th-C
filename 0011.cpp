#include<iostream>
using namespace std;

int main(){
    int cnt[42]={};
    for(int i=0 ; i<10 ; i++){
        int n;
        cin >> n;
        cnt[n%42]=1;
    }
    int ans=0;
    for(int i=0 ; i<42 ; i++)
        if(cnt[i]==1)
            ans++;
    cout << ans;
}