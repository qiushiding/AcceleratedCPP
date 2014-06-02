#ifndef GUARD_StudentInfo_H
#define GUARD_StudentInfo_H

#include<iostream>
#include<string>
#include<vector>

struct StudentInfo
{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

//TODO:Ŀǰ����source.cpp��
std::istream& read(std::istream&, StudentInfo&);
std::istream& readHw(std::istream&, std::vector<double>&);

#endif