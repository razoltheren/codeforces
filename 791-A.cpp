# include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{	int a,b,k=0;
	cin>>a;
	cin>>b;
	
	while(a<=b)
	{
		a=a*3;
		b=b*2;
		k=k+1;
	}
	cout<<k;
	
	return 0;
}