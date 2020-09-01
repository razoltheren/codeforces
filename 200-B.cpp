#include <bits/stdc++.h>
using namespace std;

int main()
{
  	 std::ios::sync_with_stdio(false);
  	 cin.tie(NULL);
  	 cout.tie(NULL);
  	 int x;
  	 cin>>x;
  	 int amt[x];
  	 float sum=0;

  	 for(int i = 0 ; i < x;i++)
  	 {
  	 	cin>>amt[i];
  	 	sum= sum + amt[i];
      //cout<<sum;
  	 }

  	 float ans = sum / x;
     printf("%.9lf",ans);
  	 //cout<<ans*100;
    return 0;
}