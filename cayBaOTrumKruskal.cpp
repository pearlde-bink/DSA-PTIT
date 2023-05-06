#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int n, m, t, sum;
int a[26][26];
vector<vector<int> > ans;
bool used[26];
struct canh{
	int x, y, z;
} ds[26];
bool comp(canh ab, canh ac)
{
	if(ab.z<ac.z)
	return true;
	else if(ab.z==ac.z)
	{
		if(ab.x<ac.x)
		return true;
		else if(ab.x==ac.x)
		{
			if(ab.y<ac.y)
			return true;
			return false;
		}
		return false;
	}
	return false;
}
void init()
{
	m=0;
	ans.clear();
	cin>>n;
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		cin>>a[i][j];
		if(j>i&&a[i][j]>0)
		{
			ds[m].x=i+1;
			ds[m].y=j+1;
			ds[m].z=a[i][j];
			m++;
		}
	}
	sort(ds, ds+m, comp);
	t=0, sum=0;
	for(int i=0;i<=n;i++)
	used[i]=true;
}
void solve()
{
	int i=0;
	while(t<n-1&&i<m)
	{
		int ab=ds[i].x, ac=ds[i].y;
		if(used[ab]||used[ac])
		{
			used[ab]=false;
			used[ac]=false;
			t++;
			sum+=ds[i].z;
			vector<int> tmp;
			tmp.push_back(ab);
			tmp.push_back(ac);
			ans.push_back(tmp);
		}
		i++;
	}
	if(t<n-1)
	{
		cout<<"Do thi khong lien thong\n";
		return ;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<2;j++)
		cout<<ans[i][j]<<' ';
		cout<<endl;
	}
	cout<<sum<<endl;
}
int main()
{
	init();
	solve();
}
