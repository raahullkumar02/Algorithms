#include <bits/stdc++.h>

using namespace std;

int cal(int a,int b){
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b % 2) return a * cal(a*a,b/2);
    return cal(a*a,b/2);
}

int main(){
    int a = 5,b = 3;
    cout << cal(a,b) << endl; // a^b
    return 0;
}

//TC - O(log(b))
//SC - O(log(b))