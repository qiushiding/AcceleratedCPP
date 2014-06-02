#include<iostream>
#include<string>
#include<ios>
#include<iomanip>
#include<vector>
#include<algorithm>

#include"StudentInfo.h"
#include"median.h"
using namespace std;


double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw)
{
    if(hw.size() == 0)
        throw domain_error("empty");
    return grade(midterm, final, median(hw));
}

double grade(const StudentInfo& s)
{
    return grade(s.midterm, s.final, s.homework);
}

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

istream& read(istream& is, StudentInfo& s)
{
    is >> s.name >> s.midterm >> s.final;
    readHw(is, s.homework);
    return is;
}

int main()
{
    cout << "enter the name" << endl;
    string name;
    cin >> name;

    cout << "enter midterm and final:" << endl;
    double midterm, final;
    cin >> midterm >> final;

    cout << "enter all the homeworks" << endl;

    vector<double> homework;
    readHw(cin, homework);

    try{
        double finalGrade = grade(midterm, final, homework);
        cout << finalGrade << endl;
    }catch(domain_error){
        cout << endl << "error" << endl;
        return 1;
    }

    system("pause");
    return 0;
}