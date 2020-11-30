#include<iostream>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define endl "\n"
#define ll long long

#define lln ll n; cin>>n
#define intn int n; cin>>n


using namespace std;



void solve (){

ll a,b;
ll k=0;
cin>>a>>b;
// if(a==b){
//     cout<<k<<endl;
// }
k = abs(a-b)/10;
if(abs(a-b)%10)
{
    k+=1;
}
cout<<k<<endl;

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