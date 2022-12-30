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

string binary(int n)
{
	string s="";
	if(n==0)
		return s+='0';
	
	while(n>0)
	{
		int p=n%2;
		n/=2;
		s+=str(p);

	}
	reverse(s.begin(),s.end());
	return s;

}

int fact(int n) 
{ 
    int res = 1; 
    for (int i = 2; i <= n; i++) 
        res = res * i; 
    return res; 
} 
int nCr(int n, int r) 
{ 
    
    int h=fact(n) / (fact(r) * fact(n - r)); 
   
    return h;
} 
  




int32_t main()
{
	
	fastio();
	io();
	w(t)
	{
		int n,l;
		cin>>n>>l;
		int a[n];
		int m=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			m=max(m,a[i]);
		}
		int k=binary(m).length();
		int b[k]={0};
		for(int i=0;i<n;i++)
		{
			int j=0;
			int h=a[i];
			while(j<k)
			{
				b[j]+=h%2;
				h/=2;
				j++;
			}

		}
		int p=1;
		map<int,int,greater<int>> tp;
		int count=0;
		for(int i=0;i<k;i++)
		{
			b[i]*=p;
			p*=2;
			if(b[i]>0)
				count++;
			if(tp.find(b[i])==tp.end())
				tp.insert(mp(b[i],1));
			else
			{
				tp[b[i]]++;
			}
		}

		int ans=1;
		if(l==count)
		{
			ans=1;
		}
		else if(l>count)
		{
			ans=-1;
		}
		else
		{
			for(auto i:tp)
			{
				
				if(i.second>=l)
				{
					ans*=nCr(i.second,l);
					break;
				}
				else
				{
					ans*=1;
					l-=(i.second);
				}
			}

		}

		cout<<ans<<endl;
		

		

		



	}
	
	
	
}


