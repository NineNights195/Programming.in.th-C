#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    cin >> a[0];
    int min = a[0] , max = a[0];
    for(int i=1 ; i<n ; i++){
        cin >> a[i];
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i]; 
    }
    cout << min << endl << max;
}