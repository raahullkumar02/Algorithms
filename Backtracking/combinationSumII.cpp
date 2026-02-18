//https://leetcode.com/problems/combination-sum-ii/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int n;
    vector<vector<int>> ans;
    void solve(vector<int> &cand,int i,int t,vector<int> &temp){
        if(t == 0){
            ans.push_back(temp);
            return;
        }
        if(i>=n || t<0 || cand[i]>t) return;
        temp.push_back(cand[i]);
        solve(cand,i+1,t-cand[i],temp);
        temp.pop_back();
        int j = i+1;
        while(j<n && cand[j] == cand[j-1]) j++;
        solve(cand,j,t,temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& cand, int target) {
        sort(begin(cand),end(cand));
        n = cand.size();
        vector<int> temp;
        solve(cand,0,target,temp);
        return ans;
    }
};