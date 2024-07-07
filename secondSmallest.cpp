#include "headerfile.h"
using namespace std;

int secondSmallest(vector<int> &vec){
    int small=INT_MAX;
    int sSmall=-1;
    int lenth=vec.size();
    for(int i=0; i<lenth; i++){
        if(vec[i]<small){
            sSmall=small;
            small=vec[i];
        }
        else if(vec[i]>small && vec[i]<sSmall){
            sSmall =vec[i];
        }
    }
    return small;
}


bool sortArr(vector<int> &arr){
    int n=arr.size();
    for(int i=1;i<=n; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}

pair<vector<int>, int> remDup(vector<int> vec){
    int n=vec.size();
    set<int>st;
    for(int i=0; i<n;i++){
        st.insert(vec[i]);
    }
    vector<int> store;
    int index=0;
    for(auto it: st){
        store.push_back(it);   
        index++;
    }
    return make_pair(store, index);
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector <int> vec;
    vec={1,1,3,3,4,5,5,6,6};
    // pair<vector<int>, int> result= remDup(vec);
    // vector<int> uniqueStore=result.first;
    // int count= remDup(vec).second;
    int index=0;
    set<int> st;
    int n=vec.size();
    for(int i=0; i<n; i++){
        st.insert(vec[i]);
    }
    vector <int> v;
    for(auto it: st){
        v.push_back(it);
        index++;
    }
    for(int it: v){
        cout<<it<<" ";
    }
    cout<<"\n"<<index;
    // cout<<secondSmallest(vec)<<"\n";
    // if(sortArr(vec)){
    //     cout<<"Sorted\n";
    // }
    // else{
    //     cout<<"Unsorted\n";
    // }
    // for(int it: uniqueStore){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // cout<<result.second;
}
