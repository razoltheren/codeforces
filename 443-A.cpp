
#include<bits/stdc++.h>
#define ll long long

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

#define lln ll n; cin>>n
#define intn int n; cin>>n
#define YES cout<<"YES"
#define NO cout<<"NO"
#define strr    string str; cin>>str;
#define strn   n=str.length()
#define fr(a,n) for(ll i=a;i<n;i++)
#define loop for(ll i=0;i<n;i++)

using namespace std;

void solve (){

  set<char> ch;
    string s;
    getline(cin,s);
    for(int i=1 ; i < (int)s.size()-1; i++){
        if(s[i]>= 'a' && s[i]<='z')
        ch.insert(s[i]);
    }
        cout<<ch.size();
}

int main(){
    IOS
    solve();
    return 0;
}