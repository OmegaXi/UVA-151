#include<iostream>

using namespace std;

main()
{
	int n;
	while(cin>>n&&n>=13&&n<=100)
	{
		for(int i=1;i<n;i++)//iΪԼɪ�򻷵Ĳ���
		{
			int k=0;
			for(int j=1;j<n;j++)
                //jΪj����ң�Ҫ���n�����������˳�����ҵı�ţ���Ҫ���n-1���������˳��ı��
				k=(k+i)%j;
			if(k==11)
			{cout<<i<<endl;break;}
		}
	}
}

/*
f(i)=f((i-1)+m)%i
f��ʾi���˱�m ���ʤ���ߵı��
*/
