#include "headerfile.h"
using namespace std;



double mean(int arr[], int size){
    double sum = 0;
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    return (sum/size);
}

double median(int arr[], int size){
    sort(arr, arr+size);
    if(size%2==0){
        return (arr[size/2 -1] + arr[size/2])/2;
    }
    else{
        return arr[size/2];
    }
}

int mode(int arr[], int size){
    map<int , int> frequency;
    for(int i=0; i<size; i++){
        frequency[arr[i]]++;
    }
    int maxCount =0;
    int mode= arr[0];
    for(auto it=frequency.begin(); it != frequency.end(); it++){
        if(it->second >maxCount){
            maxCount = it->second;
            mode= it->first;
        }
        else if(it->second == it->first){
            mode = min(mode, it->first);
        }
    }
    return mode;
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // for(auto it: arr){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    sort(arr, arr+n); // It sort the 
    // for(auto it: arr){
    //     cout<<it<<" ";
    // }
    cout<<"Mean: "<<fixed<<setprecision(6)<<mean(arr,n)<<endl;
    cout<<"Median: "<<fixed<<setprecision(6)<<median(arr,n)<<endl;
    cout<<"Mode: "<<mode(arr,n);

}
