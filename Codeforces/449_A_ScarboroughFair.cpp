#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	int n,m;
	int l,r;
	char c1,c2;
	scanf("%d %d",&n,&m);
	cin>>s;
	for(int i=1;i<=m;i++)
	{
		cin>>l>>r>>c1>>c2;
		for(int j=l-1;j<=r-1;j++)
		{
			if(s[j]==c1)
			{
				s[j]=c2;
			}
		}
	}

	cout<<s<<endl;
	return 0;
}
