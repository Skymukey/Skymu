#include<iostream>
using namespace std;
#include<stack>

int n = 0;
stack<int> a;
stack<int> b;
int m = 0;
int x = 0;

int main()
{
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>m;
		
     	if(m==0)
	 		{
	 			cin>>x;
	 			a.push(x);
	 			if(b.empty()||x>b.top())
	 				b.push(x);
	 			else b.push(b.top());
	 		}
	 	else if(m==1)
		 	{
		 		a.pop();
		 		b.pop();
		 	}
		else
		 	{
		 		if(b.empty()) cout<<0<<endl;
		 		else cout<<b.top()<<endl;		
		 	}		
	}
	return 0;
}
