#include<iostream>
#include<string>
#include<ios>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;


istream& readHw(istream& in, vector<double>& hw)
{
    if(in)
    {
        hw.clear();
        double x;
        while (cin >> x)
        {
            hw.push_back(x);
        }
        in.clear();
    }
    return in;
}


int main()
{

    cout << "enter all the homeworks" << endl;
    vector<double> homework;
    readHw(cin, homework);


    vector<double>::iterator iter = homework.begin();
    while (iter != homework.end())
    {
        if((*iter) > 100)
        {
            ++iter;
        }
        else
        {
            iter = homework.erase(iter);
        }
    }

    for(vector<double>::const_iterator const_iter = homework.begin();
        const_iter != homework.end(); ++const_iter)
    {
        cout << *const_iter << endl;

    }


    system("pause");
    return 0;
}