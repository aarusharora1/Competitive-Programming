#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using db = double;

using pi = pair<int,int>;
using pll = pair<ll,ll>;
using pd = pair<db,db>;

using vi = vector<int>;
using vb = vector<bool>;
using vll = vector<ll>;
using vd = vector<db>;
using vs = vector<string>;
using vpi = vector<pi>;
using vpll = vector<pll>;
using vpd = vector<pd>;

#define mp make_pair
#define f first
#define s second

#define sz(x) (int)(x).size()
#define all(x) begin(x),end(x)
#define rall(x) (x).rbegin, (x).rend()
#define sor(x) sort(all(x))
#define ins insert
#define pb push_back
#define pf push_front
#define lb lower_bound
#define up upper_bound

#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for(int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a);
#define trav(a,x) for(auto& a:x);

const int MOD = 1e9+7;
const int MX = 2e5+5;
const ll INF = 1e18;
const ld PI = acos((ld)-1);

void setIn(string s){freopen(s.c_str(),"r",stdin);}
void setOut(string s){freopen(s.c_str(),"w",stdout);}
void unsyncIO(){cin.tie(0)->sync_with_stdio(0);}
void setIO(string s = ""){
    unsyncIO();
    if(sz(s)){setIn(s+".in"),setOut(s+".out");}
}
int main(){
    setIO();
    //write code here
    int m,n; cin >> n >> m;
    vector<int> a;
    vector<int> b;
    F0R(i,n){
        F0R(j,m){
            if(i%2==0){
				//if(i != 0){
					//a.pb(n*m - n*(i+1)  - (j+1));
				//}
				//else{
					a.pb(n*m - m*i - j);
				//}
            }
            else{
                a.pb(m*(n-i -1) + 1+j);
            }
        }
    }
    F0R(i,m){
		F0R(j,n){
			if(i%2 == 0){
				b.pb(j*m + (1+i));
			}
			else{
				b.pb((n-j-1) * m + i+1 );
			}
		}
	}
    
    //for (int i = 0 ; i < n*m; i++) {
    //    cout << i << " " << a[i] << " " << b[i] << "\n";
   //}
    vi ans;
    for (int i = 0 ; i < n*m; i++) {
        if (a[i] == b[i]) {ans.pb(i);}
    }
    cout << sz(ans) << "\n";
    for (int i = 0 ; i < sz(ans); i++) {
        cout << ans[i]+1 << " ";
    }
    cout << "\n";
}