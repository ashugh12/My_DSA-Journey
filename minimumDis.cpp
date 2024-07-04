#include "headerfile.h"
using namespace std;

int minCost(int n, vector<int>& A) {
    vector<int> dp(n + 1, INT_MAX);
    dp[1] = 0; // cost to reach city 1 is 0

    for (int i = 1; i < n; i++) {
        if (i + 1 <= n) {
            dp[i + 1] = min(dp[i + 1], dp[i] + abs(A[i - 1] - A[i]));
        }
        if (i + 3 <= n) {
            dp[i + 3] = min(dp[i + 3], dp[i] + abs(A[i - 1] - A[i + 2]));
        }
    }
    return dp[n]; 
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int n; cin>>n;
    int arr[n];
    vector <int> A;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        A.push_back(arr[i]);
    }
    cout<<minCost(n, A);
}
