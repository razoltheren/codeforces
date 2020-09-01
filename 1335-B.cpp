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

int n, a, b;
		cin >> n >> a >> b;
		for (int i = 0; i < n; ++i) {
			cout << char('a' + i % b);
		}
		cout << endl;

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