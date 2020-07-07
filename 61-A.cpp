#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int x[100];

  string a,b;
  cin>>a>>b;

  int k=a.length();

  for(int i=0;i<k;i++)
  {
    if(a[i]!=b[i])
    {
      x[i]=1;
    }
    else{
      x[i]=0;
    }
  }

  for(int i=0;i<k;i++)
  {
    cout<<x[i];
  }
  return 0;
}
