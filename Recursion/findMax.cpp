#include <bits/stdc++.h>

using namespace std;

int maximum(vector<int> &ar,int i){
    if(i == ar.size()) return INT_MIN;
    return max(ar[i],maximum(ar,i+1));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ar = {1,2,3,21,324,2,543,5,-1,23,-3};
    cout << maximum(ar,0);
    return 0;
}