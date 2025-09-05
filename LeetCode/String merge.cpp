#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int i=0, j=0;
        int n1 = word1.size(), n2 = word2.size();
        string result = "";

        while( i<n1 && j<n2 ){
            result += word1[i];
            result += word2[j];
            i++, j++;
        }

        if(i==n1){
            while(j<n2){
                result += word2[j];
                j++;
            }
        }

        if(j==n2){
            while(i<n1){
                result += word1[i];
                i++;
            }
        }

        return result;
    }
};

int main(){

    string s1 = "abc", s2 = "abcd";
    string str = s2-s1;
    cout<<str<<endl;

    Solution s;
    cout<< s.mergeAlternately("abc","pqr");


return 0;
}
