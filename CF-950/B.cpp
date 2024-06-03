#include<iostream>  // submitted successfully
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,f,k;

        cin>>n>>f>>k;

        vector<int> arr;

        while(n--){
            int value;
            cin>>value;
            arr.push_back(value);
        }

        int index = f-1;

        int fav = arr[index];

        sort(arr.begin(), arr.end());

        int size = arr.size();

        int i=size-1;
        int deleted, flag1 = 0;

        while(k--){

            if(arr[i]==fav){
                flag1= 1;
            }
            i--;

        }
        int flag2=0;
        while(i>=0){
            if(arr[i]==fav){
                flag2=1;
                break;
            }
            i--;
        }

        if(flag1==1 && flag2==1){
            cout<<"MAYBE"<<endl;
        }

        else if(flag1==1 && flag2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

        

    }
}