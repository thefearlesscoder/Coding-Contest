#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithms>
using namespace std;

int main() {
	// your code goes here
	int T;
	while(T--){
	    int N;
	    cin>>N;
	    
	    unordered_map<int,pair<int,int>> mp_rev;
	    
	    vector<int> sum_arr;
	    
	    while(N--){
	        int v,a;
	        cin>>v>>a;
	        int sum = v+a;
	        sum_arr.push_back(sum);
	        mp_rev[sum]=make_pair(v,a);
	    }
	    
	    sort(sum_arr.begin(),sum_arr.end());
	    int size = sum_arr.size();
	    pair<int,int> p1,p2;
	    
	    p1=mp_rev[sum_arr[size-1]];
	    p2=mp_rev[sum_arr[size-2]];
	    
	    int result = p1.first*p2.second + p1.second+p1.first;
	    
	    cout<<result<<endl;
	}

}
