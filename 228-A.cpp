#include<iostream>
#include<vector>
#include<cstring>
#include<cmath>
#include<set>
#include<queue>
#include<algorithm>
#include<climits>
#include<map>
#include<unordered_map>
#define ll long long

bool isPrime(ll n){
    if(n<=1)  return false;
    if(n<=3)  return true;
    if(n%2==0 || n%3==0) return false;
    for(ll i=5;i*i<=n;i=i+6)
        if(n%i==0||n%(i+2)==0)
           return false;
    return true;
}

#define w(t) ll t,tt=1;	cin>>t;		while(t--)
#define ps(x,y) fixed<<setprecision(y)<<x
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define mp make_pair

#define vi vector<int>
#define vll vector<ll>
#define mii map<ll,ll>
#define umii unordered_map<ll,ll>
#define pi pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<ll,ll>>

#define mod 1e9+7
#define inf 1e18

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
    int input;
     vector<int>::iterator size2;
    vector<int>x;
 fr(0,4)
 {
    cin>>input;
    x.push_back(input);
 }
 sort(x.begin(),x.end());
 int size1  = x.size();

  size2  = unique(x.begin(),x.end());

x.resize(distance(x.begin(), size2)); 

int size3= x.size();

 cout<<size1-size3;
}

int main(){
    IOS
    solve();
    return 0;
}