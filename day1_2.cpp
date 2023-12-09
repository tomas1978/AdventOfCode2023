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

class Digit 
{
    private:
    int position;
    int integerValue;
    std::string textValue;
    
    public:
    Digit(){}
    Digit(int newPos, int newIntVal, std::string newTextVal) 
    {
        position=newPos;
        integerValue=newIntVal;
        textValue=newTextVal;
    }
    int getPosition(){return position;}
    void setPosition(int newPos){position=newPos;}
    std::string getTextValue(){return textValue;}
    void setTextValue(std::string newTextVal){textValue=newTextVal;}
    int getIntegerValue(){return integerValue;}
    void setIntegerValue(int newIntVal){integerValue=newIntVal;}

};

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
    std::vector<Digit*> digitVector;
    
    digitVector.push_back(new Digit(-1,1,"one"));
    digitVector.push_back(new Digit(-1,2,"two"));
    digitVector.push_back(new Digit(-1,3,"three"));
    digitVector.push_back(new Digit(-1,4,"four"));
    digitVector.push_back(new Digit(-1,5,"five"));
    digitVector.push_back(new Digit(-1,6,"six"));
    digitVector.push_back(new Digit(-1,7,"seven"));
    digitVector.push_back(new Digit(-1,8,"eight"));
    digitVector.push_back(new Digit(-1,9,"nine")); 
    for(int i=0;i<digitVector.size();i++) {
       digitVector.at(i)->setIntegerValue(s.find(digitVector.at(i)->getIntegerValue()));
       digitVector.at(i)->setPosition(i);
    }
    for(int i=0;i<digitVector.size();i++) {
       std::cout<<digitVector.at(i)->getPosition()<<" "<<std::endl;
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