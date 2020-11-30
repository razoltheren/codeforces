#include<iostream>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long 
#define strn   n=str.length()
#define fr(a,n) for(ll i=a;i<n;i++)
#define loop for(ll i=0;i<n;i++)

using namespace std;

void solve (){

  int n;
  cin>>n;
  int x;
  cin>>x;
  int k=1;
  fr(1,n)
  {
    if(n<=(((i-1)*x)+2))
{ k=i;
  break;
  //cout<<k<<" ";
  }

}
cout<<k<<endl;
}

int main(){
    IOS
    int n;
    cin>>n;
    while(n--)
    {
    solve();
  }
    return 0;
}