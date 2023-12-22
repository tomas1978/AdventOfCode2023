#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

int findLastDigit(std::string s) 
{
    std::string from_end="";
    for(int i=s.size()-1;i>=0;i--)
    {
        std::string temp="";
        from_end.push_back(s[i]);
        std::reverse(temp.begin(),temp.end());
        if(temp.find("one")>0 || temp.find("1")>0)
            return 1;
        if(temp.find("two")>0 || temp.find("2")>0)
            return 2;
        if(temp.find("three")>0 || temp.find("3")>0)
            return 3;
        if(temp.find("four")>0 || temp.find("4")>0)
            return 4;
        if(temp.find("five")>0 || temp.find("5")>0)
            return 5;
        if(temp.find("six")>0 || temp.find("6"))
            return 6;
        if(temp.find("seven") || temp.find("7"))
            return 7;
        if(temp.find("eight")>0 || temp.find("8")>0)
            return 8;
        if(temp.find("nine")>0 || temp.find("9")>0)
            return 9;
    }

    return -1;
}

//Returns the index of the first occurance of any 
//substring "one", "two", ..., "nine" in input string
int findFirstDigit(std::string s) 
{
    std::string from_beginning="";
    for(int i=s.size()-1;i>=0;i--)
    {
        std::size_t found;
        from_beginning.push_back(s[i]);
        std::cout<<from_beginning<<std::endl;
        
        
        std::cout<<from_beginning.find("oool",found)<<std::endl;
        std::cout<<found<<std::endl;
           
        
        if(from_beginning.find("one")>0 || from_beginning.find("1")>0)
            return 1;
        if(from_beginning.find("two")>0 || from_beginning.find("2")>0)
            return 2;
        if(from_beginning.find("three")>0 || from_beginning.find("3")>0)
            return 3;
        if(from_beginning.find("four")>0 || from_beginning.find("4")>0)
            return 4;
        if(from_beginning.find("five")>0 || from_beginning.find("5")>0)
            return 5;
        if(from_beginning.find("six")>0 || from_beginning.find("6"))
            return 6;
        if(from_beginning.find("seven") || from_beginning.find("7"))
            return 7;
        if(from_beginning.find("eight")>0 || from_beginning.find("8")>0)
            return 8;
        if(from_beginning.find("nine")>0 || from_beginning.find("9")>0)
            return 9;
    }
    return -1;
}

int main()
{
    std::string test="6fgthree2sixytoneptwoo";
    std::cout<<findFirstDigit(test)<<std::endl;
    //std::cout<<findLastDigit(test)<<std::endl;



    std::string test2="ert4three89jisixow";
    //std::cout<<findFirstDigit(test2)<<std::endl;



    int sum=0;
    std::ifstream infile("input.txt");

    for(std::string line; getline(infile, line); )
    {
        std::string firstLastDigit;
        //firstLastDigit.push_back(findFirstDigit(line));
        //firstLastDigit.push_back(findLastDigit(line));
        //int value=stoi(firstLastDigit);
        //sum+=value;
    }

    //std::cout<<"Sum of all calibration values: "<<sum<<std::endl;

    return 0;
}