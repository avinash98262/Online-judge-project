/*
    GOD WITH ME...
    Compete against Yourself.
*/
#include<bits/stdc++.h>
using namespace std;
#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif
#define ull unsigned long long 
#define sll signed long long 
using namespace std;
#define ff first
#define ss second
#define pb push_back
// vector<ll> v[200001]; 
// #define mp make_pair
#define dbg(args...) 42;   // dbg(s,n);
// 'A'=65, 'a' = 97, '0' = 48
#define ll long long
#define int long long
#define endl "\n"
const int mod1 = 1e9 + 7;
const long long inf = 1e18;
#define all(z) z.begin(),z.end()
#define rall(z) z.rbegin(),z.rend()
#define f(i,a,b,c) for(ll i=a;i<b;i+=c)
#define fr(i,a,b,c) for(ll i=a;i>=b;i-=c)
#define lb(v,x) lower_bound(v.begin(),v.end(),x)
#define ub(v,x) upper_bound(v.begin(),v.end(),x)
static const ll mod = 1000000007;
static const ll mod2 = 998244353;
static const ll mod3 = 1e5;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define gcd(m,n)  __gcd(m, n)
#define lcm(a,b) ((a)*(b))/gcd((a),(b))

/******************PRACTICE => SUCCESS************************
=>& x  ==> & means you send the data and update it ; 
=>in void fuction you can use the simply return; that is called return void ;
=>vector<vector<int> > vis(m.size(), vector<int> (m[0].size()));
---this way we can declear the matrix of different size 
=>v.erase(v.begin()+v.size()/2);  // particular index get erased
=>arr[x]++; ==> through this two step you can find the max freq element 

=>is_sorted(arr.begin(), arr.end())  used for both vector & string 
===>int ones = count(s.begin(), s.end(), '1') used for both arr, string
==> memset(arr, 0, sizeof(arr)); 
=> accumulate(v.begin(), v.end(), 0ll)  => ll is necessary 
==> for(auto &it: arr) cin>>it;   ***
==> q.pop() , front wala delete hota hai in queue  
==> pair<int, int> (i, last) ,we can make pair in this way 
==> vector<int> arr[x]  => in adjacency list we take this arrray because you cannot make matrix of large no.
==> *next(st.begin() , 2) note indexing start from zero,  this give the particlar index value in a set  
==> vec.insert(arr.begin() + i, x); i=0,1,2...; 
==>  arr.back()  , it is also having mind it; 
==> list <int> ls;   , push_front() , push_back() and pop
==> auto it=unique(A.begin(),A.end());
==>* arr.erase(arr.begin()+ i+1, arr.begin()+i+10);  erase all from starting index to given index  
==> if(binary_search(arr.begin(), arr.end(), x));
==> for(int i =0; i<n; i+=2)  , this work to find the alternate element ,bcz it works in anticlockwise  
==> set<int> st; st.count(x);  to check whether in the set is found or not 
==> MIND IT , mp[x] (is used to see second one), mp.find(x)!=mp.end() (is used to see first one)
==> (int)sqrt(n), 2) please do thsi if you want the integer because it is not the exact integer to get integer
==> --------we  have to use the datatypes the double  
==> cbrt(x) , this is used to find the cube root ; and others like cbrt(sqrt(x)) of 1/6
==> (!!) its a bool if(x>0) print 1 else if(x==0) print 0
==> stack<int> st ,, remember that help in reverse 
===> int el = *ms.begin() ====> in multiset/set
===> multiset me reference se pass nahi hota (&) 
===> vector<vector<int> > v(n, vector(n,0)); 
===>  arr[i]>>j   , means (j times half of that number) mind it 
-if you change the sign(<< output sign ) than j times become twice 
===> auto it  = st.find(arr[i]), to get the value than -
==> int k = *it; (or you want to one back ) than *--it; 
***===>int x=log2(n); longest power of 2 of less than n
==>  here you can do the base 10 also other remain e
===> for all subarray in array the freq of element of i position is given by
====> --- (i+1)*(n-i);   total occurences of i the element if we consider all subarray of array
====>  __builtin_popcount (i)   it count the number of set bits   *****************
===> mind it whenever you have to "MAXIMIZE" in question 
----------than try to think abt "BINARY APPROCH"
===>   int zero = int(count(S.begin(), S.end(), '0'));
===>         mp.erase(arr[start]); 
===> this are the different thing in string s = ""
===>s += a;  and s = a+s;   mind it in string 
====>set<int>:: iterator  it = st.begin(); *******************down*********
===>int cnt = count(A.begin(), A.begin() + i + 1, A[i]);   // i is zero base indexing (same below)
===>auto found = find(A.begin(), A.begin() + i + 1, A[i]) - A.begin();     // it give the index,
===>	rotate(arr.begin(), arr.begin()+ pos+1 , arr.begin()+ i+1) ; no. of rotation  you 
---------------want to rotate till which length ------this is meaning  
===> char x  = '0' + sum;  // any integer to char 
==>auto it = S.find(x); it != S.end()  // for multiset 
==> mp.count(f)  // it is nothing the boolean value like mp.find(x)
==>auto it = lower_bound(arr.begin(), arr.end(), x)-arr.begin();
===>a.resize(unique(a.begin(), a.end()) - a.begin());  //this is the shortcut to make the set ****
cout<<fixed<<setprecision(4)<<i<<endl;
==>int mx  = *max_element(arr.begin(), arr.end());  no need to make loop or sort 
==> int mn = min_element(arr.begin(),arr.end())-arr.begin()// here you get the zero base index 
// MIND IT , TO FIND THE VALUE we used star (see above);
set<int> ::iterator it;   // s =set decleared
for(it=s.begin(); it!=s.end(); it++){
	arr.push_back(*it); 
}
	    int cnt_1=count(a,a+n,1);
vector<vector<int>> cnt(26, vector<int>(26, 0));
function<void(int, long long)> Dfs = [&](int cnt, long long num) {
--> we can decleare  this type of function in loop 
if(binary_search(arr.begin(), arr.end(),arr[i])==false){}
// always try to write the code max in function manner
---> (5<<3)= 40==>mind it how it works (5*pow(2,3))
----> if((brr[i]>brr[(i+1)%n] and brr[i]>brr[(i+n-1)%n]) 
for i= zero index we can check for 1 and n-1(last)==> helpful pls mind it 
*/
//=======================================================================================================

void dfs(vector<int> adj[], vector<int> &vis, int node){
	vis[node] = 1;
	for(auto it: adj[node]){
		if(!vis[it]){
			dfs(adj, vis, it); 
		}
	}
}

void solve(){	
	
	int n ; 
	cin>>n; 
	unordered_map<int, int> mp, mp1; 
	while(n--){
		int a  , b; 
		cin>>a>>b; 
		if(!(mp[a]=b) && !(mp[b]=a)){
			mp[a]=b; 
			mp[b]=a; 
		}
		else if(!(mp1[a]=b) && !(mp1[b]=a)){
			mp1[a]=b ; 
			mp1[b]=a; 
		}
		else{
			cout<<"NO"<<endl; 
			return; 
		}
	}
	cout<<"YES"<<endl; 

}
//=======================================================================================================

 
signed main() { 
 
	ios::sync_with_stdio(false);
    cin.tie(NULL);  cout.tie(NULL);

    int t=1;
    cin>>t;
 
    while(t--){
				  //   	for(int i =1; i<=t; i++){
	
					 // cout<<"Case #"<<i<<": ";
					 // 		solve(); 
				  //   	}
    	solve();
	}

    return 0;
}	 
 
 
 