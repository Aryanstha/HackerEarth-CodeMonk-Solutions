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
//1 2 3
//1 2 2 3 3 3
//
int32_t main()
{
	fastio();
	io();
	w(t)
	{
		int n;
		cin>>n;
		int a[n];

		int h[1000001]={0};
		bool s=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			h[a[i]]++;
		}
		sort(a,a+n);
		int min=h[a[0]];
		int ans=0;
		for(int i=1;i<n;i++)
		{
			int k=h[a[i]]-min;
			ans=max(ans,k);
			if(h[a[i]]<min)
				min=h[a[i]];

		}
		ans=(ans>0?ans:-1);
		cout<<ans<<endl;

	}

}
