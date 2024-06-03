#include<iostream>
#include<unordered_map>  //submitted successfuly

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n, m;

        unordered_map<char, int> charCount;
        charCount['A']=0;
        charCount['B']=0;
        charCount['C']=0;
        charCount['D']=0;
        charCount['E']=0;
        charCount['F']=0;
        charCount['G']=0;
        cin>>n>>m;

        char a[n];
        cin>>a;

        

        for(int i=0;i<n;i++){
            charCount[a[i]]++;
        }

        int req = 0;

         for (auto i = charCount.begin(); i != charCount.end(); i++) {
            if(i->second < m){

                req=req + m-(i->second);
            }
         }
        
        cout<<req<<endl;
    }

}
