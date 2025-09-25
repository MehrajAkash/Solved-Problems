#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  int t;cin>>t;
  while(t--)
  {
         int n, val;cin>>n;

          int minuscnt=0, zerocnt=0;
          vector<int>arr(n,0);

          for(int i=0; i<n; i++)
          {
              cin>>val;
              arr[i] == val;

              if(val==-1)minuscnt++;

              if(val==0)zerocnt++;
          }

          ll res = 0;
          if(minuscnt%2==0){
            res += zerocnt;
          }

          if(minuscnt%2==1){
            res += zerocnt;
            res += 2;
          }

          cout<<res<<endl;
  }

return 0;
}
