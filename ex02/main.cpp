#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout<<" (address of str)-> "<<&str<<std::endl<<std::endl;
    std::cout<<" (address held by stringPTR) -> "<<stringPTR<<std::endl<<std::endl;
    std::cout<<" (address held by stringREF)-> "<<&stringREF<<std::endl<<std::endl;

    std::cout<<" (The value of the str)-> "<<str<<std::endl<<std::endl;
    std::cout<<" (The value pointed to by stringPTR) -> "<<*stringPTR<<std::endl<<std::endl;
    std::cout<<" (The value pointed to by stringREF)-> "<<stringREF<<std::endl<<std::endl;
    return(0);
}