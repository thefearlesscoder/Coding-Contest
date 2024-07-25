#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> intial;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            intial.push_back(val);
        }

        sort(intial.begin(), intial.end());

        int surplus = 0;
        int count = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            cout << " entered the loop" << endl;
            cout << i << endl;
            if (intial[i] >= x)
            {
                count++;
                cout << "valueof count " << count << endl;
                surplus = surplus + (intial[i] - x);
            }
            else if (intial[i] < x)
            {
                int diff = x - intial[i];
                if (diff <= surplus)
                {
                    surplus = surplus - diff;
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}
