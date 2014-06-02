#include<string>
#include<vector>
#include<iostream>
using namespace std;

vector<string> split(const string& str)
{
    vector<string> ret;
    typedef string::size_type string_size;
    string_size i = 0;
    
    while (i != str.size())
    {
        while (i != str.size() && isspace(str[i]))
        {
            ++i;
        }
        string_size j = i;
        while (j != str.size() && !isspace(str[j]))
        {
            j++;
        }
        if(i != j)
        {
            ret.push_back(str.substr(i, j-i));
            i = j;
        }

    }

    return ret;
}

int main()
{
    string str;
    while (getline(cin, str))
    {
        vector<string> vec = split(str);
        for(vector<string>::const_iterator constIter= vec.begin();
            constIter != vec.end(); ++constIter)
        {
            cout << *constIter << endl;
        }
    }

    system("pause");
    return 0;
}