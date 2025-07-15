#include<bits/stdc++.h>
using namespace std;
vector<int>vis(1e3,0);
vector<int>dp(10003,0);
class Solution {
public:
     /*vector<int>vis(10003,0);
     vector<int>dp(10003,0); */
     vector<int> sq;
    int minstep(int sum){

        if(sum==0)return 0;
         if(vis[sum])return dp[sum];

        int res=INT_MAX;

        for(int i=sq.size()-1; i>=0; i--){
            if(sum-sq[i] >= 0){
               res = min( res, 1+minstep(sum-sq[i]) );
            }
        }

         vis[sum]=1;
        dp[sum] = res;

        return res;
    }

    int numSquares(int n) {

        for(int i=1;i<=n; i++){
            sq.push_back(i*i);
        }

        int res = minstep(n);
        return res;
    }
};

int main(){

 Solution s;
 cout<<s.numSquares(13);




return 0;
}
