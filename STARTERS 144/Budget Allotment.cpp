#include <bits/stdc++.h>
using namespace std;

#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 1e9 + 7
#define FOR(a, c) for (int(a) = 0; (a) < (c); (a)++)
#define FORL(a, b, c) for (int(a) = (b); (a) <= (c); (a)++)
#define FORR(a, b, c) for (int(a) = (b); (a) >= (c); (a)--)
#define INF 1000000000000000003
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

void solve();
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    /*is Single Test case?*/ cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<ll> intial(n);

    for (ll i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        intial.push_back(val);
    }

    sort(intial.begin(), intial.end());

    ll surplus = 0;
    ll count = 0;

    for (ll i = n-1; i >= 0; i--)
    {
        if (intial[i] >= x)
        {
            count++;
            cout<< "1." << count << endl;
            surplus = surplus + (intial[i] - x);
        }
        else if (intial[i] < x)
        {
            int diff = x - intial[i];
            if (diff <= surplus)
            {
                surplus = surplus - diff;
                count++;
                cout<< "2." << count << endl;
            }
        }
    }
    cout << count << endl;
}
