#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<algorithm>

int findLastDigit(std::string s) 
{
    std::string from_end="";
    for(int i=s.size()-1;i>=0;i--)
    {
        from_end.push_back(s[i]);
        std::string temp=from_end;
        reverse(temp.begin(),temp.end());
        if(temp.find("one") || temp.find("1"))
            return 1;
        return -1;
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
    if(s.find("1")<=s.find("one"))
        positions[0]=s.find("1");
    if(s.find("two")<s.find("2"))
        positions[1]=s.find("two");
    if(s.find("2")<=s.find("two"))
        positions[1]=s.find("2");
    if(s.find("three")<s.find("3"))
        positions[2]=s.find("three");
    if(s.find("3")<=s.find("three"))
        positions[2]=s.find("3");
    if(s.find("four")<s.find("4"))
        positions[3]=s.find("four");
    if(s.find("4")<=s.find("four"))
        positions[3]=s.find("4");
    if(s.find("five")<s.find("5"))
        positions[4]=s.find("five");
    if(s.find("5")<=s.find("five"))
        positions[4]=s.find("5");
    if(s.find("six")<s.find("6"))
        positions[5]=s.find("six");
    if(s.find("6")<=s.find("six"))
        positions[5]=s.find("6");
    if(s.find("seven")<s.find("7"))
        positions[6]=s.find("seven");
    if(s.find("7")<=s.find("seven"))
        positions[6]=s.find("7");
    if(s.find("eight")<s.find("8"))
        positions[7]=s.find("eight");
    if(s.find("8")<=s.find("eight"))
        positions[7]=s.find("8");
    if(s.find("nine")<s.find("9"))
        positions[8]=s.find("nine");
    if(s.find("9")<=s.find("nine"))
        positions[8]=s.find("9");
    
    for(int i=0;i<9;i++)
        std::cout<<positions[i]<<",";
    
    std::cout<<"Position of one: "<<positions[0]<<std::endl;
    return -1;
}

int main()
{
    std::string test="fgthree2sixytonepo";
    std::cout<<findFirstDigit(test)<<std::endl;

    std::string test2="ert4three89jisixow";
    //std::cout<<findFirstDigit(test2)<<std::endl;



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