#include<iostream>

using namespace std;

main()
{
	int n;
	while(cin>>n&&n>=13&&n<=100)
	{
		for(int i=1;i<n;i++)
		{
			int k=0;
			for(int j=1;j<n;j++)
				k=(k+i)%j;
			if(k==11)
			{cout<<i<<endl;break;}
		}
	}
}