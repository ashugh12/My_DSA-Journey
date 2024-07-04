#include<stdio.h>
#include<string.h>
#include<string>
#include<vector>
#include<iostream>


using namespace std;
// Read only region start

int MaxORArray(int input1[],int input2)
{
    // Read only region end
    // Write code here
    int N= input2;
    vector<int> A(input1, input1+N);
    int total_or= 0; 
    for(int num: A){
        total_or |= num;
    }

    vector<int> prefix_or(N,0), suffix_or(N, 0);

    prefix_or[0]=A[0];
    for(int i=1; i<N; i++){
        prefix_or[i] = prefix_or[i-1]|A[i];
    }
    suffix_or[N-1]=A[N-1];
    for(int i=N-2; i>=0; i--){
        suffix_or[i] = suffix_or[i+1] | A[i];
    }

    int max_length = 0;

    for(int start =0; start<N; start++){
        for(int end= start; end<N; ++end){
            int remaining_or; 
            if(start==0){
                remaining_or = (end+1<N)? suffix_or[end+1]:0;
            }
            else if(end== N-1){
                remaining_or = prefix_or[start-1];
            }
            else {
                remaining_or= prefix_or[start-1] | suffix_or[end+1];
            }
            if(remaining_or == total_or){  
                max_length = max(max_length, end-start +1);
            }
        } 
    }
    return max_length;
}
