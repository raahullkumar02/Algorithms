#include <bits/stdc++.h>

using namespace std;

int n;

void print(string s,string ans){ // bruteforce
    if(ans.size() == n){
        cout << ans << " ";
        return;
    }
    for(int i=0;i<s.size();i++){
        string newS = s.substr(0,i) + s.substr(i+1);
        print(newS,ans + s[i]);
    }
}

void printOpt(string &s,int i){ //backtracking -> changes do work revert back
    if(i == n-1){
        cout << s << " ";
        return;
    }
    for(int j=i;j<n;j++){
        swap(s[i],s[j]); // changes
        printOpt(s,i+1); // doing work
        swap(s[j],s[i]); // revert changes
    }
}

void printOpt2(string &s,int i){ //handle duplicate
    if(i == n-1){
        cout << s << " ";
        return;
    }
    unordered_set<char> st;
    for(int j=i;j<n;j++){
        if(st.count(s[j])) continue;
        st.insert(s[j]);
        swap(s[i],s[j]); // changes
        printOpt2(s,i+1); // doing work
        swap(s[j],s[i]); // revert changes
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s = "abc";
    n = s.size();
    print(s,"");
    cout << endl;
    printOpt(s,0);
    cout << endl;
    s = "aba";
    printOpt2(s,0);
    return 0;
}