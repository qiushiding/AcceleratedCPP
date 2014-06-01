#include<iostream>
#include<string>
#include<ios>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{


    int count =0;
    double sum = 0; 
    double x;
    vector<double> homework;

    while (cin >> x)
    {
        ++count;
        homework.push_back(x);
    }

    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    
    sort(homework.begin(), homework.end());

    vec_sz mid = size / 2;
    double median = (size % 2 == 0) ?
        (homework[mid] + homework[mid - 1]) / 2 : homework[mid];


    cout << median << endl;


    system("pause");
    return 0;
}