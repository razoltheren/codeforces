
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

intn;
int x[n][2];
fr(0,n)
{
	for(int j=0;j<2;j++)
	{
		cin>>x[i][j];

	}
}
int k =0;
fr(0,n)
{
	for(int j=0;j<n;j++)
	{
		///cout<<x[i][j]<<" ";

		if(x[i][0]==x[j][1])
		{
			k=k+1;
			//cout<<x[i][0]<< " "<<x[j][1]<<endl;
		}
		
	}
	cout<<endl;
}
cout<<k<<endl;
}

int main(){
    IOS
    solve();
    return 0;
}