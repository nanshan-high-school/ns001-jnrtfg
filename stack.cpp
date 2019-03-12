#include <iostream>
#include <stack>
using namespace std;//沒想到人生第一次被迫使用using namespace std; 不用就沒得用<stack>...

int main(int argc, char** argv) 
{
	stack<int> inside,outside;
	int m,n,t,now=1,temp,put=1;
	char d;
	scanf("%d %d",&n,&m);
	for(int i=0;i<=m-1;i++)
	{
		scanf("%c %d",&d,&t);
		switch(d)
		{
			case 'a':
				for(int j=1;j<=t;j++)
				{
					if(now<=t)
					{
						inside.push(now);
						now++;
						break;
					}
					else
					{
						break;
					}
				}
			case 'b':
				for(int k=1;k<=t;k++)
				{
					if(put<=now)
					{		
						temp=inside.top();
						outside.push(temp);
						inside.pop();
						put++;
						break;
					}
					else
					{
						break;
					}
				}
				 
		}
		while(inside.empty()!=1)
		{
			inside.pop();
		}
		
		for(int i=1;i<=put;i++)
		{
			temp=outside.top();
			inside.push(temp);
			outside.pop();
		}
		for(int i=1;i<=put;i++)
		{
			temp=inside.top();
			printf("%d ",temp);
			inside.pop();
		}
	}
	return 0;
}
