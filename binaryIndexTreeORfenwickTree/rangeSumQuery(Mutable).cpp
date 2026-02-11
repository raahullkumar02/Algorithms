// Link = https://leetcode.com/problems/range-sum-query-mutable/

#include <bits/stdc++.h>

using namespace std;

class NumArray {
public:
    vector<int> T;
    vector<int> ar;
    int n;
    NumArray(vector<int>& nums) {
        n = nums.size();
        T.assign(n+1,0);
        ar = nums;
        for(int i=0;i<n;i++){
            add(i+1,ar[i]);
        }
    }
    
    void add(int k,int x){
        while(k<=n){
            T[k] += x;
            k += k & -k;
        }
    }

    void update(int index, int val) {
        int delta = val - ar[index];
        ar[index] = val;
        add(index+1,delta);
    }
    
    int sum(int k){
        int s = 0;
        while(k>0){
            s += T[k];
            k -= k & -k;
        }
        return s;
    }

    int sumRange(int left, int right) {
        return sum(right+1) - sum(left);
    }
};


