#include<bits/stdc++.h>
using namespace std;

void reverseNo(int n){
    while(!(n==0)){
        cout << n%10;
        n = n/10;
    }
}

int main() {
    int n;
    cin >> n;
    reverseNo(n);

    return 0;
}