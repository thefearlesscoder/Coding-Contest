#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> arr;

        int size = n;
        while(size--){
            int value ;
            cin>> value;
            arr.push_back(value);
        }

        vector<int> b;
        for(int i=0;i<n-1;i++){

            b.push_back(__gcd(arr[i],arr[i+1]));

        }

        int size2 = b.size();
        int flagUp = 0;
        int flagDn = 0;

        for(int i = 0; i<size2-1 ;i++){

            if(b[i]>b[i+1]){
                flagUp++;
            } 
            else{
                flagDn++;
            }        

        }

        if((flagDn-flagUp)>=0){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }

}