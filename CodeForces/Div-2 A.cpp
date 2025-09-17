#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl '\n'
#define PB push_back

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n, val;cin>>n;
        vector<int>arr(n+1, 0);

        for(int i=1; i<=n; i++)cin>>arr[i];

        int l=1, r=n;
        int cnt=0;

        for(int i=1; i<=n; i++)
        {
            if( i == arr[l] ){
                l++;
                cnt++;
            }
            else if( i == arr[r] ){
                r--;
                cnt++;
            }
            else{
                break;
            }
        }

        if(cnt==n)cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }

    }

  return 0;
}
