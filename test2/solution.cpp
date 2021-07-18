/*
This file generates two different text files which contains result generated from brute force approach
and optimized approach.
*/
#include<iostream>
using namespace std;

void brute_force_solution(){
        #ifndef ONLINE_JUDGE
            freopen("input_test_case.txt","r",stdin);
            freopen("brute_force_result.txt","w",stdout);
        #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numbers[n]={0};
        for(int i=0;i<n;i++)
            cin>>numbers[i];

        int reverse[n]={0};
        int index=0;
        for(int i=n-1; i>=0; i--)
        {
            reverse[index++] = numbers[i];
        }

        for(int i=0;i<n;i++)
            cout<<reverse[i]<<" ";
        
        cout<<endl;

    }

}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void optimized_solution(){
        #ifndef ONLINE_JUDGE
            freopen("input_test_case.txt","r",stdin);
            freopen("optimized_result.txt","w",stdout);
        #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numbers[n]={0};
        for(int i=0;i<n;i++)
            cin>>numbers[i];

        int start = 0;
        int end = n-1;
        
        while(start<=end)
        {
            swap(numbers[start],numbers[end]);
            start++;
            end--;
        }

        for(int i=0; i<n; i++)
            cout<<numbers[i]<<" ";

        cout<<endl;
    }

}

int main()
{   
    
    brute_force_solution();

    optimized_solution();

    return 0;
}