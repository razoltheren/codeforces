#include<iostream>

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);



using namespace std;

void solve (){
  int n;
  cin>>n;
  int x;
  cin>>x;
 int k=1;
 if(n<=2)
 {
  cout<<k<<endl;
  // break;
  return;
 }
 n = n-2;
 k = n/x+ (n%x!=0);
 k=k+1;
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