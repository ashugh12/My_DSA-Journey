#include "headerfile.h"
using namespace std;

vector<int> unionArr(int arr1[], int arr2[], int n, int m){
    set<int> st;
    for(int i=0; i<n; i++){
        st.insert(arr1[i]);
    }
    for(int i=0; i<m; i++){
        st.insert(arr2[i]);
    }
    int len=st.size();
    vector<int> unio;
    for(auto it: st){
        unio.push_back(it);
    }

    return unio;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int arr1[]={1,2,3,4,4,5,6};
    int arr2[]={2,3, 3,4,4,5,6};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    vector<int> store=unionArr(arr1, arr2,n, m);
    for(auto it: store){
        cout<<it<<" ";
    }
}
