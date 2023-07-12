/*Assuming there are 7.481 gallons in a cubic foot,write a program that asks the user to enter
a number of gallons and then display the equivalent in cubic feet.*/
#include<iostream>
using namespace std;
int main()
{
    int gal,feet;
    cout<<"Enter a number of gallons";
    cin>>gal;
    feet=gal/7.481;
    cout<<"The equivalent in cubic feet= "<<feet;
    return 0;
}
