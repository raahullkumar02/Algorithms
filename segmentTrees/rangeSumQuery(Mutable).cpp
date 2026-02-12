#include <bits/stdc++.h>

using namespace std;

class NumArray {
public:
    vector<int> T;
    int n;
    NumArray(vector<int>& nums) {
        n = nums.size();
        T.resize(4*n);
        build(nums,0,0,n-1);
    }
    void build(vector<int> &nums,int i,int l,int r){
        if(l==r){
            T[i] = nums[l];
            return;
        }
        int mid = (r-l)/2 + l;
        build(nums,2*i+1,l,mid);
        build(nums,2*i+2,mid+1,r);
        T[i] = T[2*i+1] + T[2*i+2];
    }
    int sum(int s,int e,int i,int l,int r){
        if(l>e || r<s) return 0;
        if(l>=s && r<=e) return T[i];
        int mid = (r-l)/2 + l;
        return sum(s,e,2*i+1,l,mid) + sum(s,e,2*i+2,mid+1,r);
    }
    void up(int idx,int x,int i,int l,int r){
        if(l==r){
            T[i] = x;
            return;
        }
        int mid = (r-l)/2 + l;
        if(mid >= idx){
            up(idx,x,2*i+1,l,mid);
        }
        else{
            up(idx,x,2*i+2,mid+1,r);
        }
        T[i] = T[2*i+1] + T[2*i+2];
    }
    void update(int index, int val) {
        up(index,val,0,0,n-1);
    }
    
    int sumRange(int left, int right) {
        return sum(left,right,0,0,n-1);
    }
};