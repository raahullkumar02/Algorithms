#include<bits/stdc++.h>

using namespace std;

int sum(vector<int> &T,int k){
    int s = 0;
    while(k>0){
        s += T[k];
        k -= k & -k;// go to parent of current node k
    }
    return s;
}

void add(vector<int> &T,int k,int n,int x){
    while(k<=n){
        T[k] += x;
        k += k & -k;// geting Next node from index k
    }
}

int rangeSum(vector<int>& T, int l, int r) {
    return sum(T,r) - sum(T,l-1);
}

int main(){
    vector<int> ar = {1,4,4,16,6,7,4,29};
    int n = ar.size();
    vector<int> T(n+1,0);

    //Construct Fenwick Tree 
    for(int i=0;i<n;i++){
        add(T,i+1,n,ar[i]); //O(log(n))
    }
    cout << sum(T,1) << "\n"; //1
    cout << sum(T,3) << "\n"; //9
    cout << sum(T,5) << "\n"; //31

    add(T,3,n,2);

    cout << sum(T,3) << "\n"; //11

    cout << rangeSum(T,4,7); //33

    return 0;

}