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

bool isPrime(int n){
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

int x[n][n] = {1};
if(n==2)
{
    cout<<"2 1"<<endl<<"1 2";
    return;
}

else
{ 
 for(int i=0;i<n-1;i++)
{
    for(int j=0;j<n-1;j++)
    {
        x[i][j] =2;
    }
    
}       
    
    int k = n-1;
    for(int i=0;i<n-1;i++)
    {
        x[i][k] = 1;
    }

     for(int i=0;i<n-1;i++)
    {
        x[k][i] = 1;
    }
    x[n-1][n-1] = 2;


}

int sum=0;

for(int i=0;i<n;i++)
{
    sum = sum + x[i][0];
}

if(isPrime(sum)==true)
{

for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
}
return;
}


else
{
     int k = n-1;
    for(int i=0;i<n-1;i++)
    {
        x[i][k] = x[i][k] + 2;
    }

     for(int i=0;i<n-1;i++)
    {
        x[k][i] = 1 + x[k][i];
    }
    x[n-1][n-1] = 2;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        cout<<x[i][j]<<" ";
    }
    cout<<endl;
}
return;

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