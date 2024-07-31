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
    for(int i=0; i<n; i++){
        int val;
        cin>> val;
        h.push_back(val);
    } 
    
    int count = 0;

    int s=0;
    int e=n-1;
    int min = h[0];

    while(s<n-1 && e>0){
        if(h[s+1]<h[s]){
            min = h[s+1];
            swap(h[s], h[s+1]);
            s++;
        }
        else{
            s++;
            min = h[s];
        }

        if(h[e]<h[e-1]){
            swap(h[e], h[e-1]);
            count ++;
            e--;
        }
        else{
            e--;
        }

        if(h[s]!=min){
            count++;
            s++;
        }
    }

    while(s<n-1){
        if(h[s+1]<h[s]){
            min = h[s+1];
            swap(h[s], h[s+1]);
            count++;
            s++;
        }
        else{
            s++;
            min = h[s];
        }   
    }

    while(e>0){
        if(h[e]<h[e-1]){
            swap(h[e], h[e-1]);
            count++;
            e--;
        }
        else{
            e--;
        }
    }
    cout<<count<<endl;


} 

