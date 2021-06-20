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
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=numbers[i];
        cout<<sum<<endl;
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
        int n;
        cin>>n;
        int numbers[n]={0};
        for(int i=0;i<n;i++)
            cin>>numbers[i];

        cout<<n*(n+1)/2<<endl;
    }

}

int main()
{   
    
    brute_force_solution();

    optimized_solution();

    return 0;
}