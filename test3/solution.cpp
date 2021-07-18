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
        string s;
        cin>>s;
        int n = s.length();

        string reverse = "";
        
        for(int i=n-1; i>=0; i--)
            reverse  = reverse+s[i];
        
        cout<<reverse<<endl;
    }

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
        string s;
        cin>>s;
        
        int start = 0;
        int end = s.length()-1;

        while(start<=end)
        {
            char ch = s[start];
            s[start] = s[end];
            s[end] = ch;

            start++;
            end--;
        }

        cout<<s<<endl;

    }

}

int main()
{   
    
    brute_force_solution();

    optimized_solution();

    return 0;
}