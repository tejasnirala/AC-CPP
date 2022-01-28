#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    n=(n*(n+1))/2;
    return n;
}

int main() {
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}