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
        char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u','v', 'w', 'x', 'y', 'z' };
        string s = "";

        for(int i=1;i<=n;i++)
        {
            s = s + alphabet[rand()%26];    
        }
        
        cout<<s<<endl;
    }

    return 0;
}