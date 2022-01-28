#include<bits/stdc++.h>
using namespace std;

void checkPrime(int N){
    bool flag = 1;
    for(int i = 2; i < sqrt(N); i++){
        if(N % i == 0){
            cout << "Non-Prime" << endl;
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout << "Prime" << endl;
    }
}

int main() {
    int N;
    cin >> N;
    checkPrime(N);
    return 0;
}