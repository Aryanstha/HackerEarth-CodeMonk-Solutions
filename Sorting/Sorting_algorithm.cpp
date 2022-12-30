#include<bits/stdc++.h>
using namespace std;

#define inf  1e18
#define int  long long
#define float double
#define endl  "\n"
#define w(t)  int t;cin>>t;while(t--)
#define str  to_string
#define vci  vector<int>
#define vcs  vector<string> 
#define mp   make_pair
#define pb   push_back
#define pii   pair<int,int>
#define pis   pair<int,string>
#define fastio() ios::sync_with_stdio(0);cin.tie(0)
#define mod   1000000007
random_device rd;
mt19937 rand_gen(rd());
#define setbits(x)     __builtin_popcountll(x)
#define trailzero(x)   __builtin_ctzll(x)
#define shuffle(vc) shuffle(vc.begin(), vc.end(), rand_gen);
#define decimal(x,value)  cout<<fixed<<setprecision(x)<<value
void io()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("/home/kashif/cp/input.txt","r",stdin);
		
		freopen("/home/kashif/cp/output.txt","w",stdout);
	#endif

}
// bool compare(pii a,pii b)
// {
// 	return a.first<=b.first;
	
// }

int number(int n,int d)
{
	int i=0;
	int ans=0;
	int k=1;
	while(k<100000 && i<=19)
	{
		int p=n%10;
		n/=10;
		i++;
		if(i>(d-1)*5 && i<=d*5)
		{
			ans+=p*k;
			k*=10;
		}
		

	}
	return ans;
}

int32_t main()
{
	
	fastio();
	io();
	int n;
	cin>>n;
	int o[n];
	int m=0;
	for(int i=0;i<n;i++)
	{
		cin>>o[i];
		m=max(m,o[i]);
		
	}
	int k=0;
	while(m!=0)
	{
		m/=10;
		k++;
	}

	if(k%5!=0)
		k=(k/5)+1;
	else
		k/=5;
	int d=1;
	pair<int,int> f[n];
	while(d<=k)
	{
		
		for(int i=0;i<n;i++)
			f[i]=mp(number(o[i],d),i);
		stable_sort(f,f+n);
		for(int i=0;i<n;i++)
			f[i].first=o[f[i].second];
		
		for(int i=0;i<n;i++)
		{
			o[i]=f[i].first;
			cout<<o[i]<<" ";
		}
		cout<<endl;
		d++;
			
	}
	



	
}
