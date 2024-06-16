#include "headerfile.h"

using namespace std;

//Max number from two numbers
int max(int n, int m)
{
    if (n > m)
    {
        return n;
    }
    return m;
    return 0;
}

void pttrn1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void extrctNum(int n){
    int digit;
        digit=n%10;
        cout<<digit<<endl;
}

int main(){
    int number;
    cin>>number;
    while(number>0){
        extrctNum(number);
        number/=10;
    }
}
