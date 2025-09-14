#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sz = m+n;
        int l=0, r=0;
        vector<int>res;

        while( l+r < sz )
        {
            if(l>=m)
            {
                while(r<n){
                   res.push_back(nums2[r]);
                   r++;
                }
            }
            if(r>=n){
                while(l<m){
                    res.push_back(nums1[l]);
                    l++;
                }
            }

            else if(nums1[l]==nums2[r]){
                res.push_back(nums1[l]);
                res.push_back(nums2[r]);
                l++; r++;
            }
            else if(nums1[l] < nums2[r]){
                res.push_back(nums1[l]);
                l++;
            }
            else{
                res.push_back(nums2[r]);
                r++;
            }


        }

        for(int v : res )cout<<v<<" ";
        cout<<endl;
}

int main(){

 vector<int>n1={1, 2, 3, 0, 0, 0};
 vector<int>n2={2, 5, 6};

 merge(n1, 3, n2, 3);


}
