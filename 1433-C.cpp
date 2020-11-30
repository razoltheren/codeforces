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
vi v;
fr(0,n)
{
cin>>arr[i];
v.pb(arr[i]);
}
int k = *max_element(v.begin(), v.end());
int b=0;
fr(0,n-1)
{
    if(v[i]==v[i+1])
    {
      b++;
    }
}
if(b==n-1)
{   //cout<<b;
    cout<<"-1"<<endl;
    return;
}


if(v[0] == k)
{
    cout<<v[0]<<endl;
}


else
{
    int x=1;
    while(x<(v.size()-1))
    {
    if(v[x]>v[x+1] && (x+1) <n )
    {

        v[x]++;
        v.erase(v.begin()+x);
        

    }

    x++;

    if(v[x]<v[x+1] && (x+1)<n)
    {
        v[x]++;
        v.erase(v.begin()+x-2);
    }
    
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