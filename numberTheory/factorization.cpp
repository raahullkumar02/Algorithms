#include <bits/stdc++.h>

using namespace std;

void factor(int n){
    for(int i=2;i*i <= n;i++){
        while(n%i == 0){
            cout << i << " ";
            n/=i;
        }
    }
    if(n>1) cout << n;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    factor(35);    
    return 0;
}