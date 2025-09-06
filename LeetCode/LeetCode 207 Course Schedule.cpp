class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& edges) {

        vector<vector<int>> adj(v);
        for(auto it : edges )
        {
            adj[ it[0] ].push_back( it[1] );
        }

        vector<int> indegree(v,0);
        vector<int>result;

        for(int i=0; i<v; i++){
            for( auto x : adj[i] ){
                indegree[x]++;
            }
        }

        queue<int>q;
        for(int i=0; i<v; i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while( !q.empty() )
        {
            int node = q.front();
            q.pop();
            result.push_back(node);

            for(auto x : adj[node])
            {
                --indegree[x];

                if(indegree[x]==0){
                  q.push(x);
                }
            }
        }

      if(result.size()==v)return true;
      else
        return false;

    }
};

/// problem Link: https://leetcode.com/problems/course-schedule/?envType=problem-list-v2&envId=topological-sort
