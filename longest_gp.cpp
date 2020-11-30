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

vi v;
int inp;
fr(0,n)
{
	cin>>inp;
	v.pb(inp);
}
int ans=2;
int k=2;
fr(0,n-2)
{
	if (v[i+1]%v[i]==0)
	{
		if(v[i+1]/v[i]==v[i+2]/v[i+1])
		{
			k++;
			//cout<<i;
			ans = k;
		}

		else {
			//int ans = max(ans,k);
			k=2;
			//continue;
		}
		
	}


}
cout<<ans;

}




int main(){
    IOS
    
    solve();
    return 0;
}