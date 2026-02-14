#include <bits/stdc++.h>

using namespace std;

int noOfWays(int n){
    if(n<=3) return n;
    return noOfWays(n-1) + noOfWays(n-2); 
}

//noOfWays(n-1) when you put tile vertically 2 x 1
//noOfWays(n-2) when you put tile horizintally (1 x 2) 2 tiles

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << noOfWays(5);
    return 0;
}