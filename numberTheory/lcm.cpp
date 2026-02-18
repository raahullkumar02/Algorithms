#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    return gcd(b%a,a);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << (10*15) / gcd(10,15) << "\n"; // a*b = lcm(a,b) * gcd(a,b)
    return 0;
}