#ifndef CLASSA_H
#define CLASSA_H

#include<iostream>
#include<string>


class ClassA
{
public:
    // constructors
    ClassA();
    ClassA(const ClassA &clA); // constructor of copy
    ~ClassA();

    // getters
    int intValue() const;
    double dblValue() const;
    std::string strValue() const;

    // setters
    void setIntValue(int intValue);
    void setDblValue(double dblValue);
    void setStrValue(const std::string &strValue);

    // operators overloading
    ClassA &operator= (const ClassA &clA);
    friend std::ostream &operator<< (std::ostream &out, const ClassA &clA);

    // inside fucntions
private:
    void initiliaze(const ClassA &clA);

    // inside members
private:
    int         _intValue {0};
    double      _dblValue {0.0};
    std::string _strValue {" "};


};

#endif // CLASSA_H
