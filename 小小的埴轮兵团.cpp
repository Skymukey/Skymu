#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>

long long n,m,k = 0;
deque<long long> d;
int op = 0;
long long a[300005] = {0};
long long cnt = 0;
int main()
{
	cin>>n>>m>>k;
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a, a + n);
		for(int i=0;i<n;i++)
			d.push_back(a[i]);
	for(int i = 0;i<m;i++)
	{
		cin>>op;
		if(op == 1)
		{
			int x = 0;
			cin>>x;
			cnt += x;
			for(deque<long long>::reverse_iterator it = d.rbegin(); it != d.rend();it++)
			{
				if(*it+cnt>k)
					{
						d.pop_back();
					}	
					else
					break;
			}
		}
		else if(op == 2)
				{
					int x = 0;
					cin>>x;
					cnt-= x;
					for(deque<long long>::iterator it = d.begin(); it != d.end();it++)
					{
						if(*it+cnt<-k)
						{
							d.pop_front();		
						}
						else
						break;
					}
				}
		else
		cout<<d.size()<<endl;
	}
	return 0;
}
