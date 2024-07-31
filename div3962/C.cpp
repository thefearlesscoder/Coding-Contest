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
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a;
    cin >> b;

    int count;
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;

        count = 0;

        string str1 = a.substr((l - 1), (r - l + 1));
        string str2 = b.substr((l - 1), (r - l + 1));

        int len = str1.length();
        unordered_map<char, int> charCount;

        for (int i = 0; i < len; i++)
        {
            charCount[str1[i]]++;
        }
        for (int i = 0; i < len; i++)
        {
            charCount[str2[i]]--;
        }
        for (auto i = charCount.begin(); i != charCount.end(); i++)
        {
            if (i->second > 0)
            {
                count += i->second;
            }
        }

        cout << count << endl;
    }
}
