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
	int n,x;
	cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=1,j=n;
	while(i<=j)
	{
		int k=(i+j)/2;
		int sum=0;
		for(int p=0;p<k;p++)
			sum+=a[p];		
		int s=sum;
		for(int p=1;p<(n-k+1);p++)
		{
			sum=(sum-a[p-1])+a[p+k-1];
			s=max(s,sum);
		}
		if(s>x)
			j=k-1;
		
		else
			i=k+1;

	}
	cout<<j<<endl;
	
	
}
