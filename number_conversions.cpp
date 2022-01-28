#include<bits/stdc++.h>
using namespace std;
int i = 0;

int DecToBin(int n){
    int ans = 0;
    int x = 1;
    while(x <= n){
        x *= 2;
    }
    x /= 2;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 2;
        ans = ans*10 + lastdigit;
    }
    return ans;
}

int DecToOctal(int n){
    int ans = 0;
    int x = 1;
    while(x <= n){
        x *= 8;
    }
    x /= 8;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 8;
        ans = ans*10 + lastdigit;
    }
    return ans;
}

string DecToHexadecimal(int n){
    string ans = "";
    int x = 1;
    while(x <= n){
        x *= 16;
    }
    x /= 16;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit*x;
        x /= 16;
        if(lastdigit <= 9)
            ans = ans + to_string(lastdigit);
        else{
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int BinToDec(int n){
    int ans=0;
    int x = 1;
    while(n>0){
        int x = n%10;
        ans += x*x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int OctalToDec(int n){
    int ans=0;
    int x = 1;
    while(n>0){
        int x = n%10;
        ans += x*x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int HexadecimalToDec(string n){
    int ans=0;
    int x = 1;
    int s = n.size();
    for(int i = s-1; i>=0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int main() {
    // string N;
    int N;
    cin >> N;

    // cout << BinToDec(N) << endl;
    // cout << OctalToDec(N) << endl;
    // cout << HexadecimalToDec(N) << endl;
    // cout << DecToBin(N) << endl;
    // cout << DecToOctal(N) << endl;
    // cout << DecToHexadecimal(N) << endl;
    return 0;
}