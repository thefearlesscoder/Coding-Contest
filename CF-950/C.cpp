#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

bool check(vector<int> &b, vector<int> &d,int &m){

    for(int i =0;i<b.size();i++){
        if(b[i]==d[m-1]){
            return true;
        }
    }
    return false;
}

void createBuff(vector<int> &a, vector<int> &b, vector<int> &buff){
        for(int i=0;i<a.size();i++){
            if(a[i]!=b[i]){
                buff.push_back(b[i]);
            }
        }
        sort(buff.begin(),buff.end());
}

bool solve(vector<int> &buff, vector<int> &d){
    int i = 0,j=0;
    while(i<buff.size() && j<d.size()){
        if(buff[i]==d[j]){
            i++;
            j++;
        }
        else if(buff[i]<d[j]){
            return false;
        }
        else{
            j++;
        }
    }
    return i==buff.size();
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a;
        vector<int> b;

        int num = n;

        while(num--){
            int d;
            cin>>d;
            a.push_back(d);
        }
        num = n;
        while(num--){
            int d;
            cin>>d;
            b.push_back(d);
        }
        int m;
        cin>>m;
        int s=m;
        vector<int> d;
        while(s--){
            int ds;
            cin>>ds;
            d.push_back(ds);
        }

        bool check_last = check(b,d,m);

        vector<int> buff;

        createBuff(a,b,buff);

        sort(d.begin(),d.end());

        if(check_last == false){
            cout<<"NO"<<endl;
        }

        else{

            int result=solve(buff,d);

            if(result==true){
                 cout<<"YES"<<endl;
            }

            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}