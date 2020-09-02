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

intn;
vector<int> x(n);
fr(0,n)
{
	cin>>x[i];
}
sort(x.begin(), x.end());
int ans = x[n-1] - x[0];

fr(0,n-1)
{
	
		ans = min (ans, x[i+1] - x[i]);
	
}
cout<<ans<<endl;
}




int main(){
    IOS
    intn;
    while(n--)
    {
    solve();
}
    return 0;
}