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
int arr[n];
int ans=0;
bool x=true; 
int a=0;
fr(0,n)
{
cin>>arr[i];
ans+=arr[i];

if(ans==1 && x)
{
    x = false;
    a=i;
}
}
int s=0;
fr(a,n)
{
    s+=arr[i];
    if(s==ans)
    {
        cout<<i-a+1-ans<<endl;
        return;
    }
}
// fr(0,n)
// {
// 	if((arr[i]==1&&arr[i+1]==0)|| arr[i]==0&&arr[i+1]==0 )
// 	{ans++;

// 	}

// }

//cout<<ans<<endl;
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