#include<bits/stdc++.h>
using namespace std;

int main(){
    int low,mid,high,count=0;
    cin >> low >> mid >> high;
    while(!(low+1 == mid && mid+1 == high)){
        int temp=mid;
        mid++;
        low=temp;
        count++;
    }
    cout << count;
}