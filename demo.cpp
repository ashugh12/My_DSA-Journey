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
            std::cout<<"*";
        }
        std::cout<<endl;
    }
}
//------->Basic Maths<---------
//Extraction of number 9879--->9,7,8, 9
//in reverse method
void extrctNum(int n){
    int digit;
        digit=n%10;
        std::cout<<digit<<endl;
}


void printDivisors(int n){
    vector<int> ls;
    for(int i=1; i<=sqrt(n); i++){//instead of sqrt() we should use i*i<=n;
        if(n%i==0){
            ls.push_back(i);
            if(n/i!=i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it:ls){
        std::cout<<it<<",";
    }
}

int GCD(int m, int n){
    for(int i=min(m,n); i>=1; i--){
        if(m%i==0 && n%i==0){
            return i;
        }
    }
}
 

int GCD_Second(int m, int n){
    while(m>0 && n>0){
        if(m>n){m=m%n;}
        else{n=n%m;}
    }
    //if one m is zero, other is gcd
    if(m==0){return n;}
    else{return m;}
}

//Recursion --> print name for n-times

void print_nam(int i, int n){
    if(i>n){
        return;
    }
    std::cout<<"raj ";
    print_nam(i+1, n);
}
 //print 1 to n

void print_cnt(int i, int n){
    if(i>n){
        return;
    }
    std::cout<<i<<endl;
    print_cnt(i+1, n);
}

void print_cnt_rev(int i){
    if(i<1){return;}
    std::cout<<i<<endl;
    print_cnt_rev(i-1);
}

//Print count from 1 to n using backtrack
void print_cnt_backtrack(int i,int n){
    if(i<1){return ;}
    print_cnt_backtrack(i-1, n);
    std::cout<<i<<endl;
}

// in reverse order
void print_cnt_backtrack_rev(int i,int n){
    if(i>n){return ;}
    print_cnt_backtrack_rev(i+1, n);
    std::cout<<i<<endl;
}

void print_name(int n){
    if(n<1){return ;}
    cout<<"raj "<<endl;
    print_name(n-1);
}

int sum_of_n(int sum, int num){
    if(num<1){
        return sum;
    }
    sum_of_n(sum+num, num-1);
}

int sum_of_n_sec(int n){
    if(n==0){return 0;}
    return n+sum_of_n_sec(n-1);
}

int factorial_recursion(int n){
    if(n==2){
        return 2;
    }
    return n*factorial_recursion(n-1);
}

int factorial_parameter(int i, int n){
    if(i==n){return n;}
    return i*factorial_parameter(i+1, n);
}

void reverse_array(int a[],int l, int r){
    if(l>=r){return ;}
    swap(a[l], a[r]);
    reverse_array(a, l+1, r-1);
}

void rev_array_sec(int arr[], int i,int s){
    if(i>=s/2){
        return;
    }
    swap(arr[i], arr[s-i-1]);
    rev_array_sec(arr, i+1,s);
}

bool check_palindrome(int i, string &s){
    if(i>=s.size()/2){return true;}
    if(s[i]!=s[s.size()-i-1]){return false;}
    return check_palindrome(i+1, s);
}

int N_fibo_num(int n){
    if(n==1 || n==0){return n;}
    int last= N_fibo_num(n-1);
    int second=N_fibo_num(n-2);
    return last+second;
}
int main(){
    // int ctn=0;
    // int number;
    // cin>>number;
    // while(number>0){
    //     extrctNum(number);
    //     number/=10;
    //     ctn++;
    // }
    // int n;
    // cin>>n;
    // printDivisors(n);

    // int num1, num2;
    // cin>>num1>>num2;
    // std::cout<<GCD(num1, num2);
    // std::cout<<endl<<GCD_Second(num1, num2);
    // print_cnt_backtrack_rev(1, 6);
    // int i1=4; int i2[]={1, 3, 2,5};
    // double sum =0;
    // vector<int> vec;
    // for(int i=0; i<i1; i++){
    //     sum+=i2[i];
    //     vec.push_back(i2[i]);
    // }
    // vector<int> ch(i2, i2+i1);
    // for(auto it: vec){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // sort(vec.begin(), vec.end());
    // for(auto it: vec){
    //     cout<<it<<" ";
    // }
    // cout<<endl;
    // for(auto it: ch){
    //     cout<<it<<" ";
    // }
    // cout<<sum_of_n_sec(4);
    // cout<<factorial_recursion(4);
    // cout<<endl;
    // cout<<factorial_parameter(1,4);

    // int arr[]={1,2,4,5,6};
    // int l=0;
    // int r=sizeof(arr)/sizeof(arr[0]);
    // for(auto i: arr){
    //     cout<<i<<" ";
    // }    
    // cout<<endl;
    // rev_array_sec(arr,l, r);
    // cout<<arr[0]<<endl;
    // for(auto i: arr){
    //     cout<<i<<" ";
    // }    

    // string a= "mada";
    // if(check_palindrome(0, a)){
    //     cout<<"It is a palindrome number."<<endl;
    // }
    // else{
    //     cout<<"It is not a palindrome number."<<endl;
    // }
    cout<<N_fibo_num(4);
}
