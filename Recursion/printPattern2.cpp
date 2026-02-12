#include <bits/stdc++.h>

using namespace std;

void print(int r,int c,int n){
    if(r <= 0) return;
    if(c < r){
        cout << "\n";
        print(r-1,n,n); 
        return; 
    } 
    cout << "*" << " ";
    print(r,c-1,n);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    print(4,4,4);

    return 0;
}