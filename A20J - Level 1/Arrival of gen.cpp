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
    // /*is Single Test case?*/ cin >> t;
    while (t--)
    {
        solve();
        // cout << "\n";
    }

    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

void solve()
{
    int n;
    cin >> n;

    vector<int> h;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        h.push_back(val);
    }
    int count = 0;

    // reverse bubbble sort to get smallest elemt at lat;
    vector<int> copy = h;

    sort(copy.begin(), copy.end()); //instead of sort we can min max and min instead of sort

    int start1; // lergest value ke liye
    int start2;// smallest value ke liye

    for(int i=0;i<n;i++){
        if(h[i]==copy[n-1]){
            start1 = i;
            break;
        }
    }

    for(int i =n-1;i>=0;i--){
        if(h[i]==copy[0]){
            start2 = i;
            break;
        }
    }

    if (copy[0] != h[n - 1])
    {
        for (int j = start2; j < n - 1; j++)
        {
            if (h[j] < h[j + 1] /*&& h[j]==copy[0]*/)
            {
                swap(h[j], h[j + 1]);
                count++;
            }
        }
    }

    if (copy[n - 1] != h[0])
    {
        for (int j = start1; j > 0; j--)
        {
            if (h[j] > h[j - 1] /*&& h[j]==copy[n-1]*/)
            {
                swap(h[j], h[j - 1]);
                count++;
            }
        }
    }

    cout << count << endl;
}
