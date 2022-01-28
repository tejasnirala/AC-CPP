#include<bits/stdc++.h>
using namespace std;

/*
    1
    1 1
    1 2 1
    1 3 3 1
    1 4 6 4 1
*/

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
    int n;  // 'n' is number of rows
    cin >> n;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << (factorial(i)/(factorial(i-j)*factorial(j))) << "  ";
        }
        cout << endl;
    }
    return 0;
}