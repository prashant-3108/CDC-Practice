#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

/*
    'a'=97 && 'z'=122
    'A'=65 && 'Z'=90

    char a = '2';
    int num = a-48;
    && vice-versa...

/*       --------------------TEMPLATE----------------------        */

#define pie acos(-1)
#define int long long int
#define u unsigned
#define ld long double

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<": "; PRINT(x); cerr << "\n";
#else
#define debug(x);
#endif

void PRINT(int t) {cerr << t;}
void PRINT(string t) {cerr << t;}
void PRINT(char t) {cerr << t;}
void PRINT(ld t) {cerr << t;}
void PRINT(double t) {cerr << t;}
void PRINT(u int t) {cerr << t;}

template <class T, class U> void PRINT(pair <T, U> p);
template <class T> void PRINT(vector <T> v);
template <class T> void PRINT(set <T> v);
template <class T, class U> void PRINT(map <T, U> v);
template <class T> void PRINT(multiset <T> v);
template <class T, class U> void PRINT(pair <T, U> p) {cerr << "{"; PRINT(p.first); cerr << ","; PRINT(p.second); cerr << "}";}
template <class T> void PRINT(vector <T> v) {cerr << "[ "; for (T i : v) {PRINT(i); cerr << " ";} cerr << "]";}
template <class T> void PRINT(set <T> v) {cerr << "[ "; for (T i : v) {PRINT(i); cerr << " ";} cerr << "]";}
template <class T> void PRINT(multiset <T> v) {cerr << "[ "; for (T i : v) {PRINT(i); cerr << " ";} cerr << "]";}
template <class T, class U> void PRINT(map <T, U> v) {cerr << "[ "; for (auto i : v) {PRINT(i); cerr << " ";} cerr << "]";}
// void PRINT(pbds v) {cerr << "[ "; for (auto i : v) {PRINT(i); cerr << " ";} cerr << "]";}

#define pres(n) cout << fixed << setprecision(n);
#define MOD ((int)(1000000007))
#define google cout<<"Case #"<<i+1<<": ";
#define loop(i, n) for (int i = 0; i < n; i++)
#define rloop(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define i1(x) int x; cin >> x;
#define i2(x, y) int x, y; cin >> x >> y;
#define i3(x, y, z) int x, y, z; cin >> x >> y >> z;
#define i4(x, y, z, a) int x, y, z, a; cin >> x >> y >> z >> a;
#define take(x, n)  for (int i = 0; i < n; i++) cin >> x[i];
#define take_max(x, n, M)  for (int i = 0; i < n; i++) cin >> x[i], M = max(M, x[i]);
#define print(a)  for (auto x : a) cout << x << " "; cout << "\n";
#define print_with_size(a)  cout << a.size() << "\n"; for (auto x : a) cout << x << " ";cout << "\n";
#define initialise(n, k) memset(n, k, sizeof(n))
#define nextl cout << "\n"
#define setbits(n) __builtin_popcount(n)
#define sz(x) (int)x.size()
#define INF 1e18
#define _INF -1e18
#define _y cout << "YES\n";
#define _n cout << "NO\n";
#define nline "\n";

const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};

/*STL shorts*/

#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define mp(x, y) make_pair(x, y)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvi_size(name, row, col) vector<vector<int>> name(row, vector<int>(col, 0));
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define vstr vector<string>
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int>>
#define umpii unordered_map<int, int>
#define umpci unordered_map<char, int>
#define pb emplace_back
#define first first
#define second second
#define ii int,int
#define vectorInp(a,n) vi a(n);take(a,n);
#define arrinp(a,n) i1(n);vi a(n);take(a,n);
#define arrinp2(a,n,k) i2(n,k);vi a(n);take(a,n);
#define matInp(a,n,m) i2(n,m); vvi_size(a,n,m); loop(i,n) {loop(j,m) cin>>a[i][j]; }
#define matPrint(a,n,m)  loop(i,n){ loop(j,m) cout << a[i][j] << " "; cout<<nline; }
#define SquarematInp(a,n,m) i1(n); vvi_size(a,n,n); loop(i,n) {loop(j,m) cin >> a[i][j]; }
#define SquarematPrint(a,n)  loop(i,n){ loop(j,n) cout << a[i][j] << " "; cout << nline; }


/* One Liner Functions */

template <class T>
void swap(T *xp, T *yp) {T temp = *xp; *xp = *yp; *yp = temp;}
int gcd(int a, int b) { if (b == 0) return a; else return gcd(b, a % b);}
int max(int a, int b) { return (a > b ? a : b ); }
int min(int a, int b) { return (a < b ? a : b ); }
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
bool isPowerof2(int n) { return n && ((n & (n - 1)) == 0); }
bool isPerfectSquare(int n) { return (ceil((double)sqrt(n)) == floor((double)sqrt(n))); }
int divCeil(int a, int b) { return ceil(((double)(a)) / (double)(b)); }


/* STD Input-Output Only for C++17 */

template<typename... T>
void inp(T&... args) { ((cin >> args), ...); }

template<typename... T>
void out(T&&... args) { ((cout << args << " "), ...); cout << nline; }

template<typename... T>
void outl(T&&... args) { ((cout << args << endl), ...); }


/* Use endl in interactive problems to flush out */
/* Always think of the case if duplicates could be there in an array */
/* Think for Binary Search */

/* " Divide by 2 == (num >> 1) " */
/* " Multiply by 2 == (num << 1) " */
/* " Toggle a bit ^ is used " */
/* " Use (1LL << x)  to get power of 2 " */


bool customComparator(const pii &a, const pii &b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int test_cases = 0;
void solve()
{
	// i1(n);
	// i2(n , k);
	// vectorInp(a, n);

	// arrinp(a, n);
	// arrinp2(a, n, k);

	// string s;
	// cin >> s;

	i1(n);

	vpii a(n);

	loop(i, n) {
		cin >> a[i].first >> a[i].second;
	}

	sort(all(a), customComparator);

	int ans = 0;
	int watched = 0, lastWatching;
	for (int i = 0; i < n; i++) {
		if (!i) {
			watched++;
			lastWatching = a[i].second;
		} else {
			if (a[i].first >= lastWatching) {
				watched++;
				lastWatching = a[i].second;
			}
		}

		ans = max(ans, watched);
	}

	cout << ans << endl;

	return;
}

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	/* Remove this in Hackerrank */
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif

	int T = 1;
	if (test_cases) {
		cin >> T;
	}
	auto start = high_resolution_clock::now();
	for (int i = 0; i < T; i++)
	{
		// google;
		solve();
	}
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(end - start);

#ifndef ONLINE_JUDGE
	cerr << "Time Taken: " << duration . count() / 1000 << " ms" <<  nline;
#endif
	return 0;
}