#include "headerfile.h"

using namespace std;

/*Given a number N. Count the number of digits in N which evenly divide N.

Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.
 

Example 1:

Input:
N = 12
Output:
2
Explanation:
1, 2 both divide 12 evenly*/


class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int digit=0;
        int original=N;
        while(N>0){
            digit=N%10;
            if(digit !=0&& original%digit==0){
                count++;
            }
            N=N/10;
        }
        return count;
        //code here
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
