#include<bits/stdc++.h>
using namespace std;

void firstrepeating(int n, int arr[]){
    const int N = 1e6;
    int idx[N];
    for(int i=0; i<N; i++){
        idx[i] = -1;
    }
    int minidx = INT_MAX;
    for(int i=0; i<n; i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }

    if(minidx == INT_MAX){
        cout << "No repeating element" << endl;
    }
    else{
        cout << minidx + 1 << endl;
    }
    return;
}

// void firstrepeating(int n, int arr[]){
//     int ans=-1;
//     for(int i=0; i<n; i++){
//         int temp = arr[i];
//         for(int j=i+1; j<n; j++){
//             if(temp == arr[j]){
//                 cout << i+1 << endl;
//                 return;
//             }
//         }
//     }
//     if(ans == -1){
//         cout << "No repeating element" << endl;
//     }

//     return;
// }

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    firstrepeating(n, arr);
    return 0;
}