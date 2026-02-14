#include <bits/stdc++.h>

using namespace std;

bool mf(bool flag,int n,int k){
    if(n == 1) return flag;
    int check = pow(2,n-2);
    if(k > check ){ // go right
       return mf(!flag,n-1,k-check);
    }
    return mf(flag,n-1,k);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << (mf(1,4,4) ? "male" : "female");    
    return 0;
}