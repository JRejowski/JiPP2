#include <iostream>
#include "Vector.h"

int main()
{
    Vector v1(2,3);
    Vector v2(2,7);
    Vector v3=v1+v2;
    Vector v4(2,2);
    v4+=v2;
    Vector v5=v1-v2;
    Vector v6(3,10);
    v6-=v2;
    double x = v1*v2;
    Vector v7=3*v1;
    Vector v8=v1*3;

    v1.print();
    v2.print();
    v3.print();
    v4.print();
    v5.print();
    v6.print();
    cout<<"v1 * v2 = "<<x<<endl;
    v7.print();
    v8.print();

    cout<<v1<<endl;

    cout<<(v1==v2)<<endl;





    return 0;
}
