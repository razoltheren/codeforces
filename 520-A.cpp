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
string s;
int arr[26] = {0};
int k=0;
cin>>s;


 transform(s.begin(), s.end(), s.begin(), ::tolower); 
 fr(0,n)
 { arr[s[i] - 'a'] +=1;

 }

 if(n< 26)
 {
 	cout<<"NO";
 }

 else {

fr(0,26)
{
	if(arr[i]==0) 
	{
		k++;
	}


}

if(k==0) YES;
else NO;

}




}




int main(){
    IOS
    
    solve();

    return 0;
}