#include "headerfile.h"
using namespace std;

void swap_at(int a, int b){
    // a=a+b; 
    // b=a-b;
    // a=a-b;
    int temp=a;
    a=b;
    b=temp;
}
void selection_sort(int arr[], int n){
    int mi;
    for(int i=0; i<=n-2; i++){
        mi=i;
        for(int j=i; j<=n-1; j++){
            if(arr[j]<arr[mi]){
                mi=j;
            }
        }
        int temp=arr[mi];
        arr[mi]=arr[i];
        arr[i]=temp;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    for(auto i: arr){
        cout<<i<<", ";
    }
}
