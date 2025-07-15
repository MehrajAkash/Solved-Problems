#include<iostream>
using namespace std;
int main(){
 string s1,s2;
 char f1,f2;
 cin>>s1>>s2;
 int n=s1.length(),c=1;
 for(int i=0;i<n;i++){
        c--;
     f1=toupper(s1[i]); f2=toupper(s2[i]);
     if(f1>f2){cout<<"1"<<endl;break;}
     if(f1<f2){cout<<"-1"<<endl;break;}
     if(f1==f2)
        {c++;continue;}

 }

if(c>0){
        cout<<"0"<<endl;
    }





 return 0;
}
