#include <iostream>
# define ll long long
#define fr(i,n) for(ll i=0;i<n;i++)
using namespace std;

int main()
{
    int n,h;
    cin>>n;
    cin>>h;
    int k=0;
    int a[n];
    fr(i,n) cin>>a[i];
    fr(i,n)
    {
        if(a[i]>h)
        {
            k+=2;
           
        }
        else{
            k+=1;
         
        }
    }

    cout<< k;



    return 0;
}
