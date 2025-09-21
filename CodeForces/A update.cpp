#include<bits/stdc++.h>
using namespace std;

int main()
{
  int t;cin>>t;
  while(t--)
  {
      int n, val;
       unordered_map<int, int>mp;

       cin>>n;
       while(n--){
         cin>>val;
         mp[val]++;
       }

       int res = INT_MIN;
       int maxFreq=0;

       for(auto x : mp ){
          maxFreq = max( maxFreq, x.second);
       }
       //cout<<"maxFreq: "<<maxFreq<<endl;

       int cnt;
       for(int i=1; i<=maxFreq; i++){

            cnt=0;
            for(auto x : mp ){
                if(x.second >= i){
                    cnt++;
                }
            }
            res = max(res, cnt*i);

       }

       cout<<res<<endl;

  }

}
