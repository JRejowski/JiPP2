

#include "../include/calc.h"

int add(int a, int b)
{
    return a + b;
}

int subb(int a, int b)
{
    return a - b;
}

double volume(double base_field, double height)
{
    return base_field*h;
}
void help()
{
   cout<<"SimpleCalc [kind of operation] [parameter] [parameter]\n\tAvailable actions:\n 1.Adding (add [a] [b])\n 2.Subtraction (substract ([a] [b])\n 3.Prismatic V prism (volume ([base_field] [h])"<<endl;
}

void menu()
{
    cout<<"Simple Calculator \n 1.Adding (add [a] [b])\n 2.Subtraction (substract ([a] [b])\n 3.Prismatic V prism (volume ([base_field] [h])\n 4.help"<<endl;
}
void error()
{
    cout<<"Wrong data, try again"<<endl;
}
