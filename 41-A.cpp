#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
string s,t;
cin>>s;
cin>>t;
int k=0;

for(int i=0;i<s.length();i++)
{
    
    if(t[i]!=s[s.length()-i-1]){
         k=1;
    }
   
}

if(k==0)
{
    cout<<"YES";
}
else{
    cout<<"NO";
}
    return 0;
}