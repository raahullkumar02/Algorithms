#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &ar,int i,int x){
    if(i == ar.size()) return -1;
    if(ar[i] == x) return i;
    return search(ar,i+1,x);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> ar = {1,2,3,4,5,6};

    cout << search(ar,0,5) << "\n";
    cout << search(ar,0,45) << "\n";

    return 0;
}

// Time complexity O(n)
// space complexity O(n)