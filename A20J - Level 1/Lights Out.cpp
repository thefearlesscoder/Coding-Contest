#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[3][3];
    vector<vector<int> >v(3, vector<int>(3,0));
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
            
        }
    }
    v[0][0] = arr[0][0] + arr[1][0] + arr[0][1];
    v[1][0] = arr[1][0] + arr[0][0] + arr[1][1]+ arr[2][0];
    v[2][0] = arr[2][0] + arr[1][0] + arr[2][1];
    v[0][1] = arr[0][1] + arr[1][1] + arr[0][2] + arr[0][0];
    v[1][1] = arr[1][1] + arr[2][1] + arr[1][2] + arr[0][1] + arr[1][0];
    v[2][1] = arr[2][1] + arr[1][1] + arr[2][0] + arr[2][2];
    v[0][2] = arr[0][2] + arr[1][2] + arr[0][1];
    v[1][2] = arr[1][2] + arr[0][2] + arr[1][1]+ arr[2][2];
    v[2][2] = arr[2][2] + arr[1][2] + arr[2][1];
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++){
            if(v[i][j]%2 == 0) cout<<1;
            else cout<<0;
            
        }
        cout<<endl;
    }
    
}