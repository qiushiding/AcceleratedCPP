#include<iostream>
#include<string>

int main()
{
    std::cout << "please enter:";
    std::string name;
    std::cin >> name;
    std::cout << "hello," << name << "!" << std::endl;

    return 0;
}