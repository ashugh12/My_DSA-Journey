#include "headerfile.h"
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int arr[5];
    int arrlength=sizeof(arr)/sizeof(arr[0]);
    cout<<arrlength;
    vector<int> vec;
    for(int i: arr){
        vec.push_back(i);
    }
    for(auto it: vec){
        cout<<it<<" ";
    }
    // for(int i=1; i<arrlength; i++){
    //     cin>>arr[i];
    // }
}
