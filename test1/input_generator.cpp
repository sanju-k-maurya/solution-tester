//This file generates input test cases to run on problems.
#include<iostream>
#include<time.h>
using namespace std;

int main(){   
    #ifndef ONLINE_JUDGE
        freopen("input_test_case.txt","w",stdout);
    #endif

    srand(time(0));
    int t=(rand()%10)+1;
    
    cout<<t<<endl;

    while(t--)
    {
        int n=(rand()%20)+1;
        cout<<n<<endl;
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<endl;
    }

    return 0;
}