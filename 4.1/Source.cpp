#include<iostream>
#include<string>
#include<ios>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;


double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if(size == 0)
    {
        throw domain_error("empty");
    }
    sort(vec.begin(), vec.end());
    vec_sz mid = size / 2;
    double ret = (size % 2 == 0) ?
        (vec[mid] + vec[mid - 1]) / 2 : vec[mid];
    return ret;
}

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