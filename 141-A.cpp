#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define vi vector<int>
#define lln ll n; cin>>n
#define intn int n; cin>>n
#define YES cout<<"YES"
#define NO cout<<"NO"
#define fr(a,n) for(ll i=a;i<n;i++)
#define loop for(ll i=0;i<n;i++)

using namespace std;

void solve (){


string s1,s2,s3;
cin>>s1>>s2>>s3;
s1.append(s2);

sort(s1.begin(), s1.end());
sort(s3.begin(), s3.end());
//cout<<s1<<endl<<s3;
if(s1==s3) YES;
else NO;






}




int main(){
    IOS
    
    solve();

    return 0;
}