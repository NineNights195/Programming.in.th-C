#include <bits/stdc++.h>
using namespace std;

int main(){
    int n[9],sum=0;
    for(int i=0 ; i<=8 ; i++){
        cin >> n[i];
        sum+=n[i];
    }
    for(int i=0 ; i<=8 ; i++)
        for(int j=0 ; j<=8 ; j++)
            if(sum-100 == n[i]+n[j])
                for(int m=0 ; m<=8 ; m++){
                    if(m==i || m==j)
                        continue;
                    cout << n[m] << endl;
                }
}