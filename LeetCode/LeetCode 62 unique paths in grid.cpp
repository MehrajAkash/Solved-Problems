#include <bits/stdc++.h>
using namespace std;

long long cnt;
class Solution{

public:

void dfs(vector<vector<int>> &grid, int r, int c, int m, int n){

   // cout<<"row:"<<r<<"  col:"<<c<<endl;
    if(r==m-1 && c==n-1){
        cnt++;
        //cout<<cnt<<endl;
    }
    vector<int>dx = {1, 0};
    vector<int>dy = {0, 1};

    for(int i=0; i<dx.size(); i++){

        int newr = r+dy[i];
        int newc = c+dx[i];

        if(newr<m && newc<n)
        {
           dfs(grid, newr, newc, m, n);
        }
    }

}

    int uniquePaths(int m, int n) {
        vector<vector<int>> grid(m, vector<int>(n,0));
        //vector<vector<bool>> vis(m, vector<bool>(n, false))
        cnt=0;
        dfs(grid, 0, 0,m,n);

        return cnt;
    }
};

int main() {
    // Write C++ code here
    Solution s;
    int row=3, column=7;
    cout<<s.uniquePaths(row, column)<<endl;

    return 0;
}
