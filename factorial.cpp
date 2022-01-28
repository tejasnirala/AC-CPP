#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    int fac=1;
    if(n < 0){
        cout << "Enter a valid number" << endl;
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
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}