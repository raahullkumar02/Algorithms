#include <bits/stdc++.h>

using namespace std;

void build(vector<int> &T,vector<int> &ar,int i,int l,int r){ // O(4n)
    if(l==r){
        T[i] = ar[l]; // lead node
        return;
    }
    
    int mid = (r-l)/2 + l;
    
    build(T,ar,2*i+1,l,mid); //left sub tree
    
    build(T,ar,2*i+2,mid+1,r);// right sub tree
    
    T[i] = T[2*i+1] + T[2*i+2];// calculate sum
    
    return;
}

void pointUpdate(vector<int> &T,int k,int x,int i,int l,int r){ // O(logn)
    if(l == r){ // update current value
        T[i] = x;
        return;
    }

    int mid = (r-l)/2 + l;
    
    if(mid >= k){
        pointUpdate(T,k,x,2*i+1,l,mid);// go to left sub tree
    }
    else{
        pointUpdate(T,k,x,2*i+2,mid+1,r);// go to right sub tree
    }
    T[i] = T[2*i+1] + T[2*i+2];// re-calculate sum

    return;
}

int rangeSum(vector<int> &T,int start,int end,int i,int l,int r){ // O(logn)
    
    if(end < l || start > r){ // out of bound 
        return 0;
    } 

    if(l >= start && r <= end){ // start and end overlap in l and r (complete overlap) 
        return T[i];
    }
    int mid = (r-l)/2 + l;
    
    // left subtree sum + right subtree sum
    return rangeSum(T,start,end,2*i+1,l,mid) + rangeSum(T,start,end,2*i+2,mid+1,r);



}

int main(){
    vector<int> ar = {5,8,6,3,2,7,2,6};
    int n = ar.size();
    
    vector<int> T(4*n);

    build(T,ar,0,0,n-1);

    cout << "Sum [0,3] = " 
         << rangeSum(T,0,3,0,0,n-1) << endl;  // 5+8+6+3 = 22

    cout << "Sum [2,5] = " 
         << rangeSum(T,2,5,0,0,n-1) << endl;  // 6+3+2+7 = 18

    pointUpdate(T,3,10,0,0,n-1); // update index 3 → 10

    cout << "After update:\n";
    cout << "Sum [0,3] = " 
         << rangeSum(T,0,3,0,0,n-1) << endl;  // 5+8+6+10 = 29

    return 0;
}
