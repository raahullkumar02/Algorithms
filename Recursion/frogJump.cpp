#include <bits/stdc++.h>

using namespace std;

int cost(vector<int> &ar,int i){
    if(i >= ar.size()-1) return 0;
    int plusOne = ((i+1 < ar.size()) ? abs(ar[i]-ar[i+1]) : 0) + cost(ar,i+1);
    int plusTwo = ((i+2 < ar.size()) ? abs(ar[i]-ar[i+2]) : 0) + cost(ar,i+2);
    return min(plusOne,plusTwo);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> ar = {10,30,40,20};
    cout << cost(ar,0);   
    return 0;
}