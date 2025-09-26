#include <bits/stdc++.h>
using namespace std;

string decryptPassword(string s){
    string ans="";
    string digitStr ="";
    int sz = s.size();
    int digitcnt=0, n=0;

    for(int i=0; i<sz; i++){

         if(s[i]>='1' && s[i]<='9'){
            digitStr += s[i];
            digitcnt++;
            continue;

        }
        else if( (s[i]>='A' && s[i]<='Z') && (s[i+1]>='a' && s[i+1]<='z') ){
            swap( s[i], s[i+1] );
            ans += s[i];
            ans += s[i+1];
            i++;

            cout<<ans<<endl;
        }
        else if(s[i]=='0'){
            ans += digitStr[digitcnt-1];
            digitcnt--;

            cout<<ans<<endl;
        }
        else if(s[i]=='*'){
            continue;
        }
        else{
            ans += s[i];

            cout<<ans<<endl;
        }

    }

    return ans;
}

int main()
{


  /*  string s;
    getline(cin, s);
*/
    string result = decryptPassword("51Pa*0Lp*0e");

    cout << result << "\n";


    return 0;
}

