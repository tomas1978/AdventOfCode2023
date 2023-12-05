#include<iostream>
#include<string>
#include<fstream>
#include<vector>

/*char findFirstDigit(std::string s) 
{
    for(int i=0;i<s.size();i++)
    {
        if(isdigit(s[i]))
            return s[i];
    }

    return '-';
}*/

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
    int firstTextDigitPositions[]={0,0,0,0,0,0,0,0,0};
    int firstDigit;
    int firstDigitPosition;
    std::string digits[]={"one","two","three","four","five","six","seven","eight","nine"}; 
    for(int i=0;i<9;i++) {
        firstTextDigitPositions[i]=s.find(digits[i]);
    }
    //for(int i=0;i<9;i++) {
    //    std::cout<<(i+1)<<": "<<firstTextDigitPositions[i]<<" ";
    //}
    for(int i=0;i<s.size();i--) {
        if(isdigit(s[i])) {
            firstDigit=s[i];
            firstDigitPosition=i;
        }
    }
    int first=firstDigitPosition;
    for(int i=0;i<9;i++) {
        if(firstTextDigitPositions[i]<first)
            first=firstTextDigitPositions[i];
    }
    if(first==firstDigitPosition)
        return firstDigit;
    else {
        for(int i=0;i<9;i++) {
            if(first==firstTextDigitPositions[i])
                return (i+1);
        }
    } 
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

    std::cout<<"Sum of all calibration values: "<<sum<<std::endl;

    return 0;
}