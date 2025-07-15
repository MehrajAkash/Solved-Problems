
/*#import<iostream>
int a,b,c,k;main()
{for(std::cin>>a;std::cin>>a>>b>>c;)k+=a+b+c> 1 ? 1 : 0;
std::cout<<k;} */

#include<iostream>
using namespace std;
int main(){
 int a,b,c,k,n;
 cin>>n;
 if(n>=1&&n<=1000){
     for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    k+=a+b+c >= 2 ? 1:0;
    }
    cout<<k<<endl;
 }




return 0;
}
