#include<iostream>
#include<string>
using namespace std;
int main(){
 string s,f;
 cin>>s;
 f=s;
 int count=0,n=s.size();
 for(int i=0;i<n;i++){
    f[i]=tolower(s[i]);
    if(f[i]=='a'||f[i]=='e'||f[i]=='i'||f[i]=='o'||f[i]=='u'){
        char temp=f[i];
        f[i]=f[i+1];
        i--;
       // cout<<f[i]<<;
        count++;
    }
 }
for(int i=0;i<n-count;i++){
    cout<<f[i];
}






  return 0;
}
