#include<bits/stdc++.h>
using namespace std;
 vector<int> adj[100000];
class Solution {
public:


    int dfs(int node){
        cout<<node<<" ";
        if(adj[node].size()==0)return 0;

        int res = INT_MAX;
        for(auto v : adj[node]){
            res = min(res, 1+ dfs(v));
        }

        return res;
    }

    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {

        for(auto it : edges )
        {
            adj[ it[0] ].push_back( it[1] );
           // adj[ it[1] ].push_back( it[0] );
        }

        for(int i=0; i<6; i++){
                cout<<i<<"-> ";
            for(auto x : adj[i]){
                cout<<x<<" ";
            }
        cout<<endl;
        }

        vector< pair<int, int> >p;

        for(int i=0; i<5; i++){
            int height = dfs(i);
            cout<<"height of "<<i<<": "<<height<<endl;
            p.push_back( {height, i} );
        }

        sort( p.begin(), p.end() );

        vector<int>sol;
        sol.push_back(p[0].second);

       for(int i=1; i<p.size(); i++){
            if(p[i].first == p[0].first){
                sol.push_back(p[i].second);
            }
       }

        return sol;
    }
};
int main(){

    Solution s;
    vector<vector<int>> edges={ {3,0}, {3,1}, {3,2}, {3,4}, {4,5} };

    vector<int> ans = s.findMinHeightTrees(6, edges );

    cout<<endl<<"ans: ";
    for(auto x : ans){
        cout<<x<<" ";
    }
    cout<<endl;

    ///[[3,0],[3,1],[3,2],[3,4],[5,4]]

}
