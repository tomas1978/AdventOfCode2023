#include<iostream>
#include<string>
#include<fstream>

char findFirstDigit(std::string s) 
{
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
            return s[i];
    }

    return '-';
}

char findLastDigit(std::string s) 
{
    for(int i=s.size()-1;i>=0;i--)
    {
        if(isdigit(s[i]))
            return s[i];
    }

    return '-';
}

int main()
{
    int sum=0;
    std::ifstream infile("input.txt");

    for(std::string line; getline(infile, line); )
    {
        std::string firstLastDigit;
        firstLastDigit.push_back(findFirstDigit(line));
        firstLastDigit.push_back(findLastDigit(line));
        int value=stoi(firstLastDigit);
        sum+=value;
    }

    std::cout<<"Sum of all calibration values: "<<sum<<std::endl;

    return 0;
}