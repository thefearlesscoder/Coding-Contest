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

    int n;
    cin >> n;

    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll val;
        cin >> val;
        a.PB(val);
    }
    bool flag = false;
    int count = 0;
    while (!flag && count!=-1)
    {
        flag = true;
        for (int i = 0; i < n-1; i++)
        {
            if (i != 0 && a[i] == 1)
            {
                if (a[i - 1] != 1)
                {
                    count = -1;
                    break;
                }
            }

            if (a[i + 1] < a[i])
            {
                flag = false;
                a[i + 1] = a[i + 1] * a[i + 1];
            }
        }

    }
    cout<<count<<endl;
}
