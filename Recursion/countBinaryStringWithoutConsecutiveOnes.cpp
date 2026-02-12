#include <bits/stdc++.h>

using namespace std;

int count(int n){
    if(n == 1) return 2;
    if(n == 2) return 3;
    return count(n-1) + count(n-2);
}

int main(){
    
    cout << count(3) << "\n";
    cout << count(5) << "\n";

    return 0;
}

// n==1 "1" , "0"
// n==2 "00" , "01", "10"
// n==3 "000" , "100", "010", "001" , "101"

// Time complexity O(2^n)
// space complexity O(n)