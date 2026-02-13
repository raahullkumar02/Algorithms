#include <bits/stdc++.h>

using namespace std;

string reduce(string s,int i){
    if(i == s.size()) return "";
    if(s[i] == 'x') return reduce(s,i+1);
    return s[i] + reduce(s,i+1);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "abcxxaavsdbjcewoixxcdsicnxa";
    s = reduce(s,0);
    cout << s;
    return 0;
}