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
while (t--) { 
solve(); 
cout << "\n"; 
} 

cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
return 0; 
} 

void solve() 
{ 
    int row, col;
    FORL(i, 1, 5){
        FORL(j, 1, 5){
            int value;
            cin >> value;
            if(value == 1){
                row = i;
                col = j;
            }
        }
    }
    int ans = abs(3-row) + abs(3-col);
    cout<<ans<<endl;    
} 

