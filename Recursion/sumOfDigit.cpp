#include <bits/stdc++.h>

using namespace std;

int sum(int n){
    if(n == 0) return 0;
    return n%10 + sum(n/10);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 423943;
    cout << sum(n);    
    return 0;
}