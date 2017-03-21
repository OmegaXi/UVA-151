#include<iostream>

using namespace std;

main()
{
	int n;
	while(cin>>n&&n>=13&&n<=100)
	{
		for(int i=1;i<n;i++)//i为约瑟夫环的步长
		{
			int k=0;
			for(int j=1;j<n;j++)
                //j为j个玩家，要求出n个玩家中最后退出的玩家的编号，就要求出n-1个玩家最后退出的编号
				k=(k+i)%j;
			if(k==11)
			{cout<<i<<endl;break;}
		}
	}
}

/*
f(i)=f((i-1)+m)%i
f表示i个人报m 最后胜利者的编号
*/
