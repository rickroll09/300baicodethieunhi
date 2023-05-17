#include <bits/stdc++.h>
using namespace std;
int sqrnum(int k)
{
	for(int i = 0;i<=sqrt(k);i++)
	{
		if (i*i==k)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int k;
	cin >> k;
	int j = 0;
	int i = 0;
	while(i<k)
	{
		if(sqrnum(j)==1)
		{
			cout << j <<  " ";
			i++;
		}
		j++;
	}
}

