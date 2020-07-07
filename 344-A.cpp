#include <iostream>
using namespace std;
int a;
int main() {
  
  int n;
  cin>>n;
  int a;
  cin>>a;
  int x;
  int k=1;
  for(int i=0;i<n-1;i++)
  {
    cin>>x;
    if(x!=a)
    {
        k++;
        a=x;
    }

    
  }
  cout<<k;
  }

