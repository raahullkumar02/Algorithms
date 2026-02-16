#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll power(int a,int b){ // O(logb)
    if(b == 0) return 1;
    ll half = power(a,b/2);
    if(b&1) return ll(a) * half * half;
    return half * half;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << power(2,50) << "\n"; //1125899906842624
    // don't use pow function because it convert int to float then compute power which occurs precision error   
    cout << pow(2,50) << "\n"; //1125899906842624.0000001
    return 0;
}