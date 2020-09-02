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

bool isPrime(ll n){
    if(n<=1)  return false;
    if(n<=3)  return true;
    if(n%2==0 || n%3==0) return false;
    for(ll i=5;i*i<=n;i=i+6)
        if(n%i==0||n%(i+2)==0)
           return false;
    return true;
}

void solve (){
intn;
int i=4;
while(i)
{
	if(isPrime(i) == false && isPrime(n-i) == false)	
	{
		cout<<i<<" "<<n-i;
        break;
		
	}
    i++;
}

}




int main(){
    IOS
    
   
    solve();

    return 0;
}