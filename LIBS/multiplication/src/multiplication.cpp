#include "multiplication.h"
#include "sum.h"

double multiplication(const double &arg1, const unsigned int &arg2)
{
    double result=0;
    for(unsigned int index=0 ; index!=arg2 ; ++index)
        result=sum(result,arg1);
    return result;
}
