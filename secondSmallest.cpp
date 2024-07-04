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

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    vector <int> vec;
    vec={3,5,6,91};
    cout<<secondSmallest(vec);
}
