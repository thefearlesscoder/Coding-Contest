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
bool isPowerOfTwo(int n)
{
    /* First x in the below expression is for the case when
     * x is 0 */
    int cnt = 0;
    while (n > 0) {
        if ((n & 1) == 1) {
            cnt++;
        }
        n = n >> 1; // keep dividing n by 2 using right
                    // shift operator
    }

    if (cnt == 1) { // if cnt = 1 only then it is power of 2
        return true;
    }
    return false;
}

void solve() 
{ 
   int x;
   cin>>x;
   int num = x;
   
  
   int n = 0;
 
   
   while(num-n >= 0){
       if(!(num-n & 1)){
           if(isPowerOfTwo(num-n)){
           break;
       }
       }
       n++;
   }
   
   int smSlice = n*2;
   cout<<smSlice<<endl;
   
   
} 

