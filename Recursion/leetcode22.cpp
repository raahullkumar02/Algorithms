//https://leetcode.com/problems/generate-parentheses/description/


#include <bits/stdc++.h>

using namespace std;


class Solution {
public:

    void compute(int n,int o,int c,string s,vector<string> &ans){
        if(o == n && c == n){
            ans.push_back(s);
            return;
        }
        if(o<n) compute(n,o+1,c,s+"(",ans);
        if(o>c) compute(n,o,c+1,s+")",ans);
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        compute(n,0,0,"",ans);
        return ans;
    }
};