#include <bits/stdc++.h>

using namespace std;

vector<string> grid;

bool isSafe(int row,int col,int n){
    for(int i=row-1;i>=0;i--){
        if(grid[i][col] == 'Q') return false;
    }
    for(int i=row-1,j=col-1;i>=0 && j>=0;i--,j--){
        if(grid[i][j] == 'Q') return false;
    }
    for(int i=row-1,j=col+1;i>=0 && j<n;i--,j++){
        if(grid[i][j] == 'Q') return false;
    }
    return true;
}

void nQueens(int row,int n) {
    if(row == n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << grid[i][j];
            }
            cout << "\n";
        }
        for(int i=0;i<n;i++) cout << "--";
        cout << "\n";
        return;
    }
    for(int col=0;col<n;col++){
        if(isSafe(row,col,n)){
            grid[row][col] = 'Q'; //changes
            nQueens(row+1,n); // doing work
            grid[row][col] = '.'; // revert back
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n = 4;
    grid.resize(n,string(n,'.'));
    nQueens(0,n);
    return 0;
}


