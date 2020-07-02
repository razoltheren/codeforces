# include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{	int a;
	long long int b;
	cin>>b;
	cin>>a;
	
	for(int i=0;i<a;i++)
	{
		if(b%10==0)
		{
			b=b/10;
		}

		else{
			b=b-1;
		}
	}
	
	cout<<b;
	return 0;
}