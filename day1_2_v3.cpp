#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

//Returns the first occurance of any substring  
//"one", "two", ..., "nine" or "1", "2" in input string
char findLastDigit(std::string s) 
{
    std::string from_end="";
    for(int i=s.size();i>=0;i--)
    {
        std::size_t found;
        from_end.push_back(s[i]);
          
        if(from_end.find("one")!=std::string::npos || from_end.find("1")!=std::string::npos)
            return '1';
        if(from_end.find("two")!=std::string::npos || from_end.find("2")!=std::string::npos)
            return '2';
        if(from_end.find("three")!=std::string::npos || from_end.find("3")!=std::string::npos)
            return '3';
        if(from_end.find("four")!=std::string::npos || from_end.find("4")!=std::string::npos)
            return '4';
        if(from_end.find("five")!=std::string::npos || from_end.find("5")!=std::string::npos)
            return '5';
        if(from_end.find("six")!=std::string::npos || from_end.find("6")!=std::string::npos)
            return '6';
        if(from_end.find("seven")!=std::string::npos || from_end.find("7")!=std::string::npos)
            return '7';
        if(from_end.find("eight")!=std::string::npos || from_end.find("8")!=std::string::npos)
            return '8';
        if(from_end.find("nine")!=std::string::npos || from_end.find("9")!=std::string::npos)
            return '9';
        
    }
    return -1;
}

//Returns the first occurance of any substring  
//"one", "two", ..., "nine" or "1", "2" in input string
char findFirstDigit(std::string s) 
{
    std::string from_beginning="";
    for(int i=0;i<s.size();i++)
    {
        std::size_t found;
        from_beginning.push_back(s[i]);
        //std::cout<<from_beginning<<std::endl;
         
        if(from_beginning.find("one")!=std::string::npos || from_beginning.find("1")!=std::string::npos)
            return '1';
        if(from_beginning.find("two")!=std::string::npos || from_beginning.find("2")!=std::string::npos)
            return '2';
        if(from_beginning.find("three")!=std::string::npos || from_beginning.find("3")!=std::string::npos)
            return '3';
        if(from_beginning.find("four")!=std::string::npos || from_beginning.find("4")!=std::string::npos)
            return '4';
        if(from_beginning.find("five")!=std::string::npos || from_beginning.find("5")!=std::string::npos)
            return '5';
        if(from_beginning.find("six")!=std::string::npos || from_beginning.find("6")!=std::string::npos)
            return '6';
        if(from_beginning.find("seven")!=std::string::npos || from_beginning.find("7")!=std::string::npos)
            return '7';
        if(from_beginning.find("eight")!=std::string::npos || from_beginning.find("8")!=std::string::npos)
            return '8';
        if(from_beginning.find("nine")!=std::string::npos || from_beginning.find("9")!=std::string::npos)
            return '9';
        
    }
    return -1;
}

int main()
{
    //std::string test="fsix2sixytoneptwokthreeo";
    //std::cout<<"First: "<<findFirstDigit(test)<<std::endl;
    //std::cout<<"Last: "<<findLastDigit(test)<<std::endl;
    
    //std::string test2="ert4three89jisixow";

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