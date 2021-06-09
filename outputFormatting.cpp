/*
cout<<showpoint; ==point value will show after decimal value
cout<<noshowpoint;  ==for not show
cout<<setprecision(10);#include <iomanip>  ==with point;
cout<<fixed; then setprecision used for how many value will show after point
<<setw(15)  ==used for setting output width
*/
#include<iostream>
#include<conio.h>
#include <iomanip>
using namespace std;
int main()
{

    int num1,num2;
    cout <<"Enter first number: ";
    cin >>num1;
    cout <<"Enter second number: ";
    cin >>num2;

    cout <<showpoint;
    cout<<fixed;
    cout << setprecision(2);

    float sum=num1+num2;
    cout <<setw(20)<<"sum is = "<<sum;
    cout <<endl;
    getch();

    float sub=num1-num2;
    cout <<setw(20)<<"substraction is = "<<sub;
    cout <<endl;
    getch();

    float mult=num1*num2;
    cout <<setw(20)<<"sum is = "<<mult;
    cout <<endl;
    getch();

    double dev=num1/num2;
    cout <<setw(20)<<"devide is = "<<dev;
    cout <<endl;
    getch();
    return 0;


}
