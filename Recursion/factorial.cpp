#include <bits/stdc++.h>

using namespace std;

int f(int n){
    if(n==0 || n==1) return 1;
    return n * f(n-1);
}

int main(){
    cout << f(4) << endl;
    return 0;
}

//TC - O(n)
//SC - O(n)