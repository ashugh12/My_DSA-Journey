#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Function to calculate the LCM of two numbers
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int findPairs(int input1, int input2[]) {
    int N = input1;
    vector<int> A(input2, input2 + N);
    set<int> A_set(A.begin(), A.end());
    int count = 0;
    
    // Iterate through all pairs (i, j) where i != j
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int a = A[i];
            int b = A[j];
            int product = a * b;
            if (A_set.find(product) != A_set.end()) {
                count++;
            }
            // Also consider the pair in the reverse order
            if (a != b && A_set.find(b * a) != A_set.end()) {
                count++;
            }
        }
    }
    
    return count;
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int N = 5;
    int A[] = {1, 2, 3, 4, 5};
    cout << findPairs(N, A) << endl;  // Output: 10
    return 0;
}
