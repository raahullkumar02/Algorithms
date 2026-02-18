#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
    vector<string> res;
    bool helper(vector<vector<int>>& maze, int r,int c,int n){
        return r>=0 and c>=0 and r<n and c<n and maze[r][c]==1;
    }
    void solve(vector<vector<int>>& maze, int r,int c,string ans){
        int n = maze.size();
        if(r==n-1 && c == n-1){
            res.push_back(ans);
            return;
        }
        
        maze[r][c] = 2;
        
        if(helper(maze,r+1,c,n)){
            solve(maze,r+1,c,ans+"D");
        }
        if(helper(maze,r-1,c,n)){
        solve(maze,r-1,c,ans+"U");
        }
        if(helper(maze,r,c+1,n)){
        solve(maze,r,c+1,ans+"R");
        }
        if(helper(maze,r,c-1,n)){
            solve(maze,r,c-1,ans+"L");
        }
        
        maze[r][c] = 1;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        if(!maze[0][0] || !maze[maze.size()-1][maze.size()-1]) return {};
        solve(maze,0,0,"");
        sort(res.begin(),res.end());
        return res;
    }
};