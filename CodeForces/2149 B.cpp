#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;cin>>t;
    while(t--)
    {
           int n; cin>>n;
           vector<ll>arr;

            ll val;
            for(int i=0; i<n; i++)
            {
              cin>>val;
              arr.push_back(val);
            }
            sort(arr.begin(), arr.end());

            ll dif=0, result = LLONG_MIN;

            for(int i=0; i<n; i=i+2){
                //cout<<arr[i]<<" "<<arr[i+1]<<"  dif: ";
                dif = int( abs(arr[i]-arr[i+1]) );
                result = max(result, dif);
            }

            cout<<result<<endl;
    }

 return 0;
}
