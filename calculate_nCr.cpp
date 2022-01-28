#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fac=1;
    if(n < 0){
        cout << "Enter a vallid number" << endl;
        fac = 0;
    }
    else{
        for(int i=2; i<=n; i++){
            fac *= i;
        }
    }
    
    return fac;
}

int main() {
    int n,r;
    cin >> n >> r;
    cout << (factorial(n)/(factorial(n-r)*factorial(r))) << endl;
    return 0;
}