#include<iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl "\n"
#define ll long long

#define lln ll n; cin>>n
#define intn int n; cin>>n


using namespace std;



void solve (){

int a,b;
cin>>a>>b;
if(a<b)
{
	cout<<b-a<<endl;
}

else if(a % 2 == b % 2)
	cout << 0 << endl;

else
    cout << 1 << endl;


}




int main(){
    IOS
    intn;
    while(n--)
    	solve();


    return 0;
}