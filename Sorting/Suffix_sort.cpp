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
	string s;
	int k;

	cin>>s;
	cin>>k;
	int n=s.length();
	string a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=s.substr(i,n-i);
	}
	sort(a,a+n);
	cout<<a[k-1]<<endl;
	
	
}
