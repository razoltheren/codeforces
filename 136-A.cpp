#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n], y[n];

      for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

        for(int i=0;i<n;i++)
    {
        
        y[x[i]-1] = i+1;
    }

    for(int i=0;i<n;i++)    
    {
        cout<<y[i]<<" ";
    }
    return 0;
}
