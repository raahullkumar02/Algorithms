#include <bits/stdc++.h>

using namespace std;

vector<int> ar = {10,30,40,50,20};
int k = 3;

int cost(int i){
    if(i>=ar.size()-1) return 0;
    int ans = INT_MAX;
    for(int j=1;j<=k;j++){
        if(i+j >= ar.size()) break;
        ans = min(ans,abs(ar[i]-ar[i+j]) + cost(i+j));
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << cost(0);    
    return 0;
}