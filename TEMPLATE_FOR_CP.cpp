#include<bits/stdc++.h>
#include <chrono>
#define ll long long int
#define in_arr(arr, n) for(int i=0;i<n;i++) cin>>arr[i];
#define in_2arr(arr, n,m) for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>arr[i][j];
#define out_arr(arr, n) for(int i=0;i<n;i++) cout<<arr[i]<<" "; cout<<endl;
#define mod 1000000007
#define vi vector
#define ss second
#define ff first
#define pb push_back
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
using namespace std;
using namespace chrono;

// imp functions i use
ll binToDec(string s) { return bitset<64>(s).to_ullong(); } // change the bitset according to your needs
string decToBin(ll a) { return bitset<64>(a).to_string(); }
ll pow(ll a,ll b){if(b==0){ return 1;} ll x=pow(a,b/2);if(b&1){return x*x*a;}else{return x*x;}}

// nCr setup
const int MAX = 1e6;
ll fact[MAX + 1], invFact[MAX + 1];

ll modPow(ll a, ll b) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void precompute_nCr() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i <= MAX; ++i)
        fact[i] = fact[i - 1] * i % mod;
    invFact[MAX] = modPow(fact[MAX], mod - 2);
    for (int i = MAX - 1; i >= 1; --i)
        invFact[i] = invFact[i + 1] * (i + 1) % mod;
}

ll nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % mod * invFact[n - r] % mod;
}

// Sieve setup
const int NMAX = 1e6 + 5;
vi<int> prime;
vector<bool> isPrime(NMAX, true);

void sieve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i < NMAX; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j < NMAX; j += i)
                isPrime[j] = false;
        }
    }
    for (int i = 2; i < NMAX; ++i) {
        if (isPrime[i])
            prime.pb(i);
    }
}


void solve(){
    return;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //precompute_nCr();
    //sieve();
    int T;
    cin>>T;
    auto start1 = high_resolution_clock::now();
    while(T--){
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
    cerr << "Time: " << duration.count() / 1000 << " ms" << endl;
}