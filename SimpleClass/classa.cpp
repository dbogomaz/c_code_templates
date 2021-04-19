#include "classa.h"

// =========== constructors ===========
ClassA::ClassA()
{

}

ClassA::ClassA(const ClassA &clA)
{
    initiliaze(clA);
}

ClassA::~ClassA()
{

}



// =========== getters ===========
int ClassA::intValue() const
{
    return _intValue;
}

double ClassA::dblValue() const
{
    return _dblValue;
}

std::string ClassA::strValue() const
{
    return _strValue;
}



// =========== setters ===========
void ClassA::setIntValue(int intValue)
{
    _intValue = intValue;
}

void ClassA::setDblValue(double dblValue)
{
    _dblValue = dblValue;
}

void ClassA::setStrValue(const std::string &strValue)
{
    _strValue = strValue;
}



// =========== operators overloading ===========
ClassA &ClassA::operator=(const ClassA &clA)
{
    if(this == &clA) {
        return *this;
    }
    initiliaze(clA);
    return *this;
}

std::ostream &operator<< (std::ostream &out, const ClassA &clA)
{
    using namespace std;

    out << clA.intValue() << "\t" <<
           clA.dblValue() << "\t" <<
           clA.strValue();

    return out;
}


// =========== inside fucntions ===========
void ClassA::initiliaze(const ClassA &clA)
{
    _intValue = clA.intValue();
    _dblValue = clA.dblValue();
    _strValue = clA.strValue();
}
