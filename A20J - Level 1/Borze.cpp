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
    string num;
    cin>> num;

    string dig="";

    if(num[0] == '.') {
        dig.push_back('0');

        int i =1;
        while(i<num.length()){
            if(num[i]=='-' && num[i+1] == '.'){
                dig.push_back('1');
                i+=2;
            }
            else if(num[i]=='-' && num[i+1] == '-'){
                dig.push_back('2');
                i+=2;
            }
            else{
                dig.push_back('0');
                i+=1;
            }
        }
    }
    else{
        int i =0;
        while(i<num.length()){
            if(num[i]=='-' && num[i+1] == '.'){
                dig.push_back('1');
                i+=2;
            }
            else if(num[i]=='-' && num[i+1] == '-'){
                dig.push_back('2');
                i+=2;
            }
            else{
                dig.push_back('0');
                i+=1;
            }
        }
    }
    cout<<dig<<endl;   

} 

