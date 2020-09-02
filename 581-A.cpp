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

int a,b;
cin>>a>>b;
int k = min(a,b);

int x= max(a,b);

int x1 = (x-k)/2;
cout<<k<<" "<<x1;
}




int main(){
    IOS
    
   
    solve();

    return 0;
}