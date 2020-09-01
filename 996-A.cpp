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

 int arr[] = {100,20,10,5,1};
 lln;
 int k=0;
 fr(0,5)
 {

 	k+= n/ arr[i];
 	n = n%arr[i];
 }
 cout<<k;

}




int main(){
    IOS
    solve();
    return 0;
}