#include<iostream>
#include<string>
#include<fstream>
#include<vector>




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
int findFirstDigit(std::string s) 
{
    std::string from_beginning="";
    for(int i=0;i<s.size();i++) {
        from_beginning+=s[i];
        if(isdigit(s[i]))
            return isdigit(s[i]);
    }
    //std::cout<<from_beginning<<std::endl; 
    return -1;
}

int main()
{
    std::string test="23gh7one89two8three";
    std::cout<<findFirstDigit(test)<<std::endl;

    std::string test2="ert4three89jisixow";
    std::cout<<findFirstDigit(test2)<<std::endl;



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

    //std::cout<<"Sum of all calibration values: "<<sum<<std::endl;

    return 0;
}