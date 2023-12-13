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
    int positions[]={0,0,0,0,0,0,0,0,0};
    if(s.find("one")<s.find("1"))
        positions[0]=s.find("one");
    else
        positions[0]=s.find("1");
    if(s.find("two")<s.find("2"))
        positions[1]=s.find("two");
    else
        positions[1]=s.find("2");
    if(s.find("three")<s.find("3"))
        positions[2]=s.find("three");
    else
        positions[2]=s.find("3");
    if(s.find("four")<s.find("4"))
        positions[3]=s.find("four");
    else
        positions[3]=s.find("4");
    if(s.find("five")<s.find("5"))
        positions[4]=s.find("five");
    else
        positions[4]=s.find("5");
    if(s.find("six")<s.find("6"))
        positions[5]=s.find("six");
    else
        positions[5]=s.find("6");
    if(s.find("seven")<s.find("7"))
        positions[6]=s.find("seven");
    else
        positions[6]=s.find("7");
    if(s.find("eight")<s.find("8"))
        positions[7]=s.find("eight");
    else
        positions[7]=s.find("8");
    if(s.find("nine")<s.find("9"))
        positions[8]=s.find("nine");
    else
        positions[8]=s.find("9");
    
    for(int i=0;i<9;i++)
        std::cout<<positions[i]<<",";
    
    std::cout<<"Position of one: "<<positions[0]<<std::endl;
    return -1;
}

int main()
{
    std::string test="23ghnine7one819two8three";
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