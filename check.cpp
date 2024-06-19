#include <iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    // int n;
    // cin>>n;
    // int arr[n]; 
    // for(int i=0;i<n; i++){
    //     cin>>arr[i];
    // }
    // int hash[13]={0};
    // for(int i=0; i<n; i++){
    //     hash[arr[i]]+=1;
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int number;
    //     cin>>number;
    //     cout<<hash[number]<<endl;
    // }
    // return 0;

    string s="abskckddslds";
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++; 
    }
    int q;
    cin>>q; 
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
}
