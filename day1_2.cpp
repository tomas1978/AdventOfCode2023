#include<iostream>
#include<string>
#include<fstream>
#include<vector>

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

//Returns the index of the first occurance of any 
//substring "one", "two", ..., "nine" in input string
void findFirstTextDigit(std::string s) 
{
    std::string digits[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(int i=0;i<9;i++) 
    {
        
    }
    std::string searchStr="one";
    std::cout<<"String: "<<s.find(searchStr);
    //return s.find(searchStr);
}

int main()
{
    std::string test="23gh7one89two8three";
    findFirstTextDigit(test);


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