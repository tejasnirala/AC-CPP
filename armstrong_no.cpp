#include<bits/stdc++.h>
using namespace std;

void checkArmstrong(int n){
    int an = n, dig, sum = 0;
    while(!(n == 0)){
        dig = n%10;
        // sum += (dig * dig * dig);
        sum += pow(dig, 3);
        n = n/10;
    }
    if(sum == an){
        cout << "It's an Armstrong number" << endl;
    }
    else{
        cout << "It's not an Armstrong number" << endl;
    }

    return;
}

int main() {
    int n;
    cin >> n;
    checkArmstrong(n);
    return 0;
}