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
while (t--) { 
solve(); 
cout << "\n"; 
} 

cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
return 0; 
} 

void solve() 
{ 
  int n,k;
  cin >> n >> k;

    vector<int>a;
    vector<int> b;
    map<int, int> arrMap;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        a.push_back(val);
    }

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        b.push_back(val);

        arrMap[a[i]]=b[i];
    }

    int score =0;
    sort(a.begin(), a.end());

    while(k--){
        int  i = n-1;
        while(i>=0){
            score += a[i];

            a[i] = max(0, (a[i] - arrMap[a[i]]));
            i--;
            k--;
        }
        
        
    }

    

    

    
} 

