#include<bits/stdc++.h>
using namespace std;

bool checkPytha(int a, int b, int c){
    int A = pow(a, 2), B = pow(b, 2), C = pow(c, 2);
    bool ans = 0;
    int m = max(max(a, b), c);
    if(m == a){
        if(A==(B+C)){
            ans = 1;
            return ans;
        }
        else{
            return ans;
        }
    }
    else if(m == b){
        if(B==(A+C)){
            ans = 1;
            return ans;
        }
        else{
            return ans;
        }
    }
    else{
        if(C==(A+B)){
            ans = 1;
            return ans;
        }
        else{
            return ans;
        }
    }
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(checkPytha(a, b, c)){
        cout << "It's a Pythagorian Triplet";
    }
    else{
        cout << "It's not a Pythagorian Triplet";
    }
    return 0;
}