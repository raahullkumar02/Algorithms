#include <bits/stdc++.h>

using namespace std;

void print(vector<int> &ar,int i){
    if(i == ar.size()) return;
    cout << ar[i] << " ";
    print(ar,i+1); 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> ar = {1,2,3,4,5,6};

    print(ar,0);

    return 0;
}

// Time complexity O(n)
// space complexity O(n)