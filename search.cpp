#include<bits/stdc++.h>
using namespace std;

int linearsearch(int n, int arr[], int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int binarysearch(int n, int arr[], int key){
    int s = 0, e = n-1, mid;
    while(s<=e){
        mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return -1;
}

int main() {
    int n, key;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cin >> key;
    cout << linearsearch(n, arr, key) << endl;
    cout << binarysearch(n, arr, key) << endl;
    return 0;
}