#include <bits/stdc++.h>

using namespace std;

bool check(int n){
    for(int i=2;i*i <= n;i++){
        if(n%i == 0) return 0;
    }
    return n>1;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << check(67);
    return 0;
}