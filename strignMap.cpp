#include "headerfile.h"
using namespace std;

int addChar(string s){
	int count_even=0;
	int count_odd=0;
	int sLen=s.length();
	map<char, int> mpp;
	for(int i=0;i<sLen; i++){
		mpp[s[i]]++;
	}
	for(auto it:mpp){
		if(it.second%2==0){
			count_even++;
		}
		else{
			count_odd++;
		}
	}

	if(count_odd==1 && count_even>=0){
		return 0;
	}
	else{
		return (count_odd-1);
	}
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T;
	cin >> T;    //Reading input from STDIN
	int N;
	cin>>N;
	string S;
	cin>>S;
	cout<<addChar(S);
}
