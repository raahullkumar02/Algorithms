#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){ // Euclidean Algorithm O(log min(a,b))
    if(a==0) return b;
    return gcd(b%a,a);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << gcd(20,25) << "\n";    
    cout << __gcd(20,25); // build in  O(log min(a,b))
    return 0;
}