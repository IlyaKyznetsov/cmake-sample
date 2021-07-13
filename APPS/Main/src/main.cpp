#include "sum.h"
#include "multiplication.h"

#include <iostream>
#define D(x) std::cout<<std::endl<<x

int main()
{
    D("Start");
    D("Version:"<<VERSION_MAJOR<<"."<<VERSION_MINOR);
    D("sum(1,2)="<<sum(1,2));
    D("multiplication(2,3)="<<multiplication(2,3));
    D("Finish");
    return 0;
}
