#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    typedef long long ll;
    const ll mod = 1e9 + 7;
    // same sum function
    int sum(vector<int> &T,int k){ // O(logn)
        ll s = 0;
        while(k>0){
            s = (s + T[k]) % mod;
            k -= k & -k;
        }
        return s;
    }
    // same add function
    void add(vector<int> &T,int k,int x,int n){ // O(logn)
        while(k<=n){
            T[k] = (T[k] + x) % mod;
            k += k & -k;
        }
    }
    // same sum range 
    int rangeSum(vector<int>& T, int l, int r) { // O(2.logn)
        return (sum(T,r) - sum(T,l-1) + mod) % mod;
    }

    vector<int> querySum(int n, int arr[], int q, int qr[]) {
        
        vector<int> T(n+1,0),ans;
        // creating BIT
        for(int i=0;i<n;i++){ // O(nlogn)
            add(T,i+1,arr[i],n);
        }
        // calculating sum of range 
        for(int i=0;i<2*q;i+=2){ // O(q)
            ans.push_back(rangeSum(T,qr[i],qr[i+1])); // O(2.logn)
        }
        
        return ans;
    }
};

//Time complexity - O(nlogn + q.logn)
//space complexity - O(n)