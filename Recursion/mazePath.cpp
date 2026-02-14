#include <bits/stdc++.h>

using namespace std;

void paths(int i,int j,int n,int m,string path){
    if(i>=n || j>=m ) return;
    if(i == n-1 && j == m-1){
        cout << path << "\n";
        return;
    }
    paths(i+1,j,n,m, path + "D");
    paths(i,j+1,n,m, path + "R");
}

int fact(int n){
    if(n <= 1) return 1;
    return n * fact(n-1);
}

int formula(int n,int m){
    n--;
    m--;
    return fact(n+m) / (fact(n) * fact(m));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << formula(2,2) << "\n";    
    paths(0,0,2,2,"");    
    return 0;
}


// math formula permutation

// (n-1 + m-1)! / (n-1)! (m-1)!