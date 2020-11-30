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

int x=0;
int k=n%10;
int ans = 10*(k-1);

//cout<<ans<<endl;
while(n)
{
	n=n/10;
	x++;
}

if(x==1)
{
	cout<<ans+1<<endl;
}

if(x==2)
{
	cout<<ans+3<<endl;
}

if(x==3)
{
	cout<<ans+6<<endl;

}

if(x==4)
{
	cout<<ans+10<<endl;
}
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