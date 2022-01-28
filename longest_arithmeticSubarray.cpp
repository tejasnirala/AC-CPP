#include<bits/stdc++.h>
using namespace std;

int longest(int n, int arr[]){
    int curr = 2;
    int ans = 2;
    int pcd = arr[1] - arr[0]; // pcd -> previous common difference
    int j = 2;
    while(j < n){
        if(pcd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pcd = arr[j] - arr[j-1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << longest(n, arr) << endl;
    return 0;
}