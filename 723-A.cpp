#include<iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl "\n"
#define ll long long

#define lln ll n; cin>>n
#define intn int n; cin>>n


using namespace std;



void solve (){

ll a,b,c;

cin>>a>>b>>c;

ll p = max(a,b);
ll q= max(p,c);

ll k1= min(a,b);
ll k = min(k1,c);

cout<< q - k;


}




int main(){
    IOS
    
    solve();


    return 0;
}