#include <bits/stdc++.h>

using namespace std;

int count(int n){
    if(n <=2) return n;
    return count(n-1) + (n-1) * count(n-2);
}

//A B C D

//count(n-1) D chooses to go single rest of them either make pair or go single 
//count(n-2) D chooses to make a pair rest of them either make pair or go single 
//(n-1) no of choices D have to make a pair


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << count(4);    
    return 0;
}