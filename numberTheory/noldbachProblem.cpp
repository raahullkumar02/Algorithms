#include <bits/stdc++.h>

using namespace std;

vector<bool> sieve;

vector<int> compute(int n){
    vector<int> primes;
    sieve[0] = false;
    sieve[1] = false;
    for(int i=2;i*i<=n;i++){
        if(sieve[i]){
            for(int j=i*i;j<=n;j+=i) sieve[j] = false;
        }
    }
    for(int i=0;i<=n;i++) if(sieve[i]) primes.push_back(i);
    return primes;
}

bool check(vector<int> &ar,int k,int n){
    for(int i=1;i<ar.size();i++){
        int temp = ar[i] + ar[i-1] + 1;
        if(temp > n) break;
        if(sieve[temp]){
            k--;
        } 
    }
    return k<=0;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    sieve.resize(n+1,true);
    vector<int> ar = compute(n);
    cout << (check(ar,k,n) ? "YES\n" : "NO\n");
    return 0;
}