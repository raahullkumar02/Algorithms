//https://leetcode.com/problems/house-robber/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> ar;
    int n;
    int solve(int i){
        if(i >= n) return 0;
        int taken = ar[i] + solve(i+2);
        int notTaken =  solve(i+1);
        return max(taken,notTaken);
    }
    int rob(vector<int>& nums) {
        ar = nums;
        n = nums.size();
        return solve(0);
    }
};


// give TLE to resolve this use dp