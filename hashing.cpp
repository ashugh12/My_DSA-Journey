#include "headerfile.h"
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin>>n;
    int arr[n];
    map<int, int> mpp;
    for(int i=0; i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }

    //Map store the values in the sorted order.


    // for(auto i: mpp){
    //     cout<< i.first<<"->"<<i.second<<endl;
    // } 

    int q; 
    cin>>q; 
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    } 
    return 0;
}
