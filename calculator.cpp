#include <iostream>
#include <math.h>
using namespace std;

float add(float num1, float num2)
{

    return (num1 + num2);
}
float sub(float num1, float num2)
{

    return (num1 - num2);
}
float mul(float num1, float num2)
{

    return (num1 * num2);
}
float div(float num1, float num2)
{

    return (num1 / num2);
}
int main()
{
    float num1, num2;
    char choice;

    cout << " ENTER   number input : " << endl;
    cin >> num1 >> num2;

    cout << "ENTER your operator  choice +,-,*,/ :" << endl;

    cin >> choice;

    if (choice == '1') // '+' addition
        cout << "Adddition of  two number are : " << add(num1, num2) << endl;

    else if (choice == '2') // '-' substraction
        cout << "Substraction of two numbēr arē : " << sub(num1, num2) << endl;

    else if (choice == '3') // '*' multiplication
        cout << " multiplication of two numbers are :  " << mul(num1, num2) << endl;

    else if (choice == '4') // '/' division
        cout << " division of two numbers are :  " << div(num1, num2) << endl;

    else
        cout << " invalid error: syntax error " << endl;

    return 0;
}