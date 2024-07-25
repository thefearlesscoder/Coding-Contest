#include <bits/stdc++.h>
using namespace std;
int countDistinct(vector<int> &arr,int s, int n)
{
    // First sort the array so that all
    // occurrences become consecutive
    

    // Traverse the sorted array
    int res = 0;
    for (int i = s; i < n; i++) {

        // Move the index ahead while
        // there are duplicates
        while (i < n - 1 && arr[i] == arr[i + 1])
            i++;

        res++;
    }

    return res;
}


int main() {
	int t;
    cin >> t;

    while(t--){

        int n;
        cin >> n;
        vector<int> arr;
        for(int i =0;i<n;i++){
            int val;
            cin >> val;
            arr.push_back(val);
        }

        sort(arr.begin(), arr.end());

        for(int i=0;i<n;i++){
            int uniq = countDistinct(arr, i, n);

            if((n-i)%uniq == 0){
                cout<< n-i << endl;
                break;
            }
            
        }
        
    }

}
