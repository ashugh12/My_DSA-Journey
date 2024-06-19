#include "headerfile.h"
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string s ="abdkisnddglkd";
    map<char, int> mpp;
    for(int i=0; i<s.length(); i++){
        mpp[s[i]]++;
    }
    int low=0; int high=0;
    for(auto it : mpp){
        if(low>=it.second){
            low=it.second;
        }
        if(high<=it.second){
            high=it.second;
        }
    }
    cout<<"Lowest and highest frequency is:"<<low<<" & "<<high<<endl;

    
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<mpp[ch]<<endl;
    }
}
