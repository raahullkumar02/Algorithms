// https://leetcode.com/problems/sudoku-solver/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int r,int c,char x){
        for(int i=0;i<9;i++){
            if(board[r][i] == x) return false   ;
        }
        for(int i=0;i<9;i++){
            if(board[i][c] == x) return false;
        }
        for(int i=(r/3)*3;i<((r/3)+1)*3;i++){
            for(int j=(c/3)*3;j<((c/3)+1)*3;j++){
                if(board[i][j] == x) return false;
            }
        }
        return true;
    }

    bool solve(vector<vector<char>>& board,int r,int c){
        if(r==9) return true;
        if(c == 9) return solve(board,r+1,0);
        if(board[r][c] != '.') return solve(board,r,c+1);
        for(int x=1;x<=9;x++){
            char ch = x + '0';

            if(isSafe(board,r,c,ch)){
                
                board[r][c] = ch;

                if(solve(board,r,c+1)) return true;
                
                board[r][c] = '.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);        
    }
};