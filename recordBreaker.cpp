#include<bits/stdc++.h>
using namespace std;

int recordbreaking(int n, int arr[]){
    int ans = 0;
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        if(i == n-1){
            if(arr[i] > mx){
                ans++;
            }
        }
        else{
            if(arr[i] > mx && arr[i] > arr[i+1]){
                ans++;
            }
        }
        mx = max(mx, arr[i]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin >> arr[n];
    }
    cout << recordbreaking(n, arr) << endl;
    return 0;
}