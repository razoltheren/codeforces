
#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,t;
    string s;
    cin>>n;
    cin>>t;
    cin>>s;
    int i=0;
    for(int i=0;i<t;i++)
    {
        while(i<n)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i+=2;
            }
            
            else {
                ++i;
            }
        }
        
        
    
    }
    cout<<s;
    return 0;
}