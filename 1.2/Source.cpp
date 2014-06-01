#include<iostream>
#include<string>
using namespace std;

int main()
{
    std::cout << "please enter:";
    std::string name;
    std::cin >> name;

    const string greeting = "hello, " + name + "!";
    const string spaces(greeting.size(), ' ');
    const string second = "*" + spaces + "*";
    const string first(second.size(), '*');

    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "*" << greeting << "*" << endl;
    cout << first << endl;

    system("pause");
    return 0;
}