#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream brute_force_result;
    ifstream optimized_result;

    string b_line;
    string o_line;
    
    brute_force_result.open("brute_force_result.txt");
    optimized_result.open("optimized_result.txt");
    


    int line=0;
    int incorrect=0;

    while (brute_force_result.eof()==0 && optimized_result.eof()==0)
    {
        line++;
        getline(brute_force_result,b_line);
        getline(optimized_result,o_line);

        if(b_line!=o_line)
        {
            incorrect++;

        }    


    }
    line--;

    if(incorrect==0)
    {
        cout<<"Correct Solution."<<endl;
        cout<<"All "<<line<<" "<<" test cases passed.";
        
    }    
    else
    {
        cout<<"Incorrect Solution."<<endl;
        cout<<line-incorrect<<" out of "<<line<<" Test cases passed."<<endl;
    }    

    brute_force_result.close();
    optimized_result.close();
    



return 0;
}