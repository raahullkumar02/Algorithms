#include <bits/stdc++.h>

using namespace std;

bool check(int n){
    vector<bool> sieve(n+1,true);
    sieve[0] = false;
    sieve[1] = false;
    for(int i=2;i*i<=n;i++){
        if(sieve[i]){
            for(int j=i*i;j<=n;j+=i){
                sieve[j] = false;
            }
        }
    }
    return sieve[n];
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << check(21);
    return 0;
}