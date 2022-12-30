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

int32_t main()
{
	
	fastio();
	io();
	w(t)
	{
		int n,k;
		string s;
		cin>>n>>k;
		cin>>s;
		string max=s;
		s+=s;

		for(int i=0;i<n;i++)
		{
			string l=s.substr(i,n);
			for(int j=0;j<n;j++)
			{
				if(l[j]!=max[j])
				{
					
					if(l[j]=='1')
					{
						max=l;
					}
					break;
				}
			}
		}
		
		vci a;
		for(int i=0;i<n;i++)
		{
			if(s.substr(i,n)==max)
				a.pb(i);
		}
		int g=0;
		int c=a.size();
		if(k<=c)
		{
			cout<<a[k-1]<<endl;
		}
		else
		{
			int h=ceil(k*1.0/c);
			h-=1;
			k-=c*h;
			g+=n*h;
			if(k>0)
				g+=a[k-1];
			cout<<n*h+a[k-1]<<endl;

		}
		


		
	}
			

	
	
}
