#include<bits/stdc++.h>
using namespace std;

void maxtilli(int n, int arr[]){
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        mx = max(mx, arr[i]);
        cout << mx << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    maxtilli(n, arr);
    return 0;
}