#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool comp(vector<ll> &a,vector<ll> &b){
    if(a.size() != b.size()) return false;
    ll n = a.size();
    for(ll i=0;i<n;i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b;
        for(ll i=0;i<n;i++) cin >> a[i];
        sort(begin(a),end(a));
        ll m = a[0]*a[n-1];
        for(ll i=2;i*i<=m;i++){
            if(m%i==0){
                b.push_back(i);
                if(i != m/i) b.push_back(m/i);
            }
        }
        sort(begin(b),end(b));

        if(comp(a,b)) cout << m << "\n";
        else cout << "-1\n";
    }    
    return 0;
}