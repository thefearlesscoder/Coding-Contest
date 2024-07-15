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
bool areAllBitsSet(int n)
{
    // all bits are not set
    if (n == 0)
        return false;
    // loop till n becomes '0'
    while (n > 0) {
        // if the last bit is not set
        if ((n & 1) == 0)
            return false;
        // right shift 'n' by 1
        n = n >> 1;
    }
    // all bits are set
    return true;
} 
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
    int n;
    cin>>n;
    vector<int> arr;
    
    FOR(i,n){
        int value;
        cin>>value;
        arr.PB(value);
    }
    sort(arr.begin(), arr.end());
    int count = 0;
    // bool flag=false;

    while(arr.size()!=0){
        int result = 0;
        FOR(i,arr.size()-1){
            result = (result) | (arr[i]);
        }
        if(areAllBitsSet(result)){
            break;
        }
        else{
            count++;
            arr.pop_back();
        }
    }
   
        cout<<count<<endl;
} 

