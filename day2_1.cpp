#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile("input.txt");
    //for(string line; getline(infile, line, ' ' ); )
    string input;
    while(true)
    {
        getline(infile, input, ' ');
        cout<<input<<endl;
    }
}