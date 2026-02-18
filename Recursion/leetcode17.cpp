// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<string> fill(){
        vector<string> mp(10);
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        return mp;
    }
    vector<string> mp = fill();

    void compute(string &digits,int i,string s,vector<string> &ans){
        if(i == digits.size()){
            ans.push_back(s);
            return;
        }
        if(digits[i] == '7' || digits[i] == '9'){
            for(int j=0;j<4;j++){
                char ch = mp[digits[i] - '0'][j];
                compute(digits,i+1,s + ch,ans);
            }
        }
        else {
            for(int j=0;j<3;j++){
                char ch = mp[digits[i] - '0'][j];
                compute(digits,i+1,s + ch,ans);
            }

        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        
        compute(digits,0,"",ans);
        return ans;
    }
};