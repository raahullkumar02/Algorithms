#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    
    vector<int> T;
    int n;
    
    vector<int> querySum(int k, int arr[], int q, int qr[]) {
        n = k;
        T.resize(4*n);
        vector<int> ans;
        build(arr,0,0,n-1);
        
        for(int i=0;i<2*q;i+=2){
            ans.push_back(sum(qr[i]-1,qr[i+1]-1,0,0,n-1));
        }
        return ans;
    }
    
    void build(int nums[],int i,int l,int r){
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
};