#include <bits/stdc++.h>
using namespace std;
#define int 			long long int
#define mod 			1000000007
#define fast  			ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi 				vector <int>
#define pii 			pair< int ,int >
#define all(v) 			v.begin(),v.end()
#define PB 				push_back
#define MP 				make_pair
#define ff 				first
#define ss 				second
#define fo(i, a, b) 	for (int i = a; i < b; i++)
#define rfo(i, a, b) 	for (int i = a; i >= b; i--)
#define f(i,container)  for(auto &i:container)
#define endl 			"\n"
#define sz(a) 			(int)a.size()
#ifndef 				ONLINE_JUDGE
#define debug(x) 		cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(int t) 		{cerr << t;}
void _print(string t)	{cerr << t;}
void _print(char t) 	{cerr << t;}
void _print(double t) 	{cerr << t;}
 
template <class T, class V> 	void _print(pair <T, V> p);
template <class T> 		 		void _print(vector <T> v);
template <class T> 		 		void _print(set <T> v);
template <class T, class V> 	void _print(map <T, V> v);
template <class T> 		 		void _print(multiset <T> v);
template <class T, class V> 	void _print(pair <T, V> p) 			{cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> 		 		void _print(vector <T> v) 			{cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> 		 		void _print(set <T> v) 				{cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> 		 		void _print(multiset <T> v) 		{cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> 	void _print(map <T, V> v)			{cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> 	void _print(unordered_map <T, V> v)	{cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
clock_t start;
void excectime()
{
    clock_t end=clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    #ifndef ONLINE_JUDGE
    cout<<'\n';
    cout<<'\n';
    cout << "Excecuted in "<< fixed << time_taken << setprecision(5);
    cout << " secs " << endl;
    #endif
}
 
 
 
 
signed main()
{
    fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t;	cin>>t;
 
    while(t--)
    {
        string s;   cin>>s;
        int a = 0, b=0, c=0;
        fo(i,0,sz(s))
        {
            if(s[i]=='B')   b++;
            else if (s[i]=='A') a++;
            else c++;
        }
        if(b==a+c)  cout<<"YES\n";
        else    cout<<"NO\n";
    }
 
 
    excectime();
}
