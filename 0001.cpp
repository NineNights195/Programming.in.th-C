#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    if (a+b+c >= 80 && a+b+c <= 100)
        cout << "A";
    else if (a+b+c >= 75 && a+b+c <= 79)
        cout << "B+";
    else if (a+b+c >= 70 && a+b+c <= 74)
        cout << "B";
    else if (a+b+c >= 65 && a+b+c <= 69)
        cout << "C+";
    else if (a+b+c >= 60 && a+b+c <= 64)
        cout << "C";
    else if (a+b+c >= 55 && a+b+c <= 59)
        cout << "D+";
    else if (a+b+c >= 50 && a+b+c <= 54)
        cout << "D";
    else
        cout << "F";
}