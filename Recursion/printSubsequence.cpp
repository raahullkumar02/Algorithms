#include <bits/stdc++.h>

using namespace std;

void print(string s,int i,string ss){
    if(i == s.size()){
        cout << ss << "\n";
        return;
    }
    print(s,i+1,ss + s[i]); // notTaken 
    print(s,i+1,ss); // taken
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    print("abc",0,"");    
    return 0;
}