/*Write a program that generates the following table:
    1990      135
    1991     7290
    1992    11300
    1993    16200 */
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(5)<<1990<<setw(10)<<135<<endl;
    cout<<setw(5)<<1991<<setw(10)<<7290<<endl;
    cout<<setw(5)<<1992<<setw(10)<<11300<<endl;
    cout<<setw(5)<<1993<<setw(10)<<16200<<endl;
    return 0;
}
