// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main() 
{
    char oper;
    float num1, num2,num3;
    cout<<"\n 1. addition\n 2.substraction\n 3. multiplecation \n 4. division \n 5. Remainder \n 6. Percentage\n 7. Area of a triangle \n 8. area of a rectangle \n 9. Simple interest\n";
    cout<< "Enter an operator : ";
    cin >> oper;

    switch (oper) {
        case '1':
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '2':
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '3':
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
            
        case '4':
        cout << "Enter two numbers: " << endl;
        cin >> num1 >> num2;
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;

        case '5':
        int a,b;
        cout<<"enter the dividend : ";
        cin>>a;
        cout<<"enter the divisor :";
        cin>>b;
        cout<<"The remainder is "<<a%b;
        break;

        case '6':
        cout<<"enter the Number : ";
        cin>>num1;
        cout<<"enter percentage :";
        cin>>num2;
        cout<<"The result is  "<<num1* num2/100;
        break;


        case '7':
        cout<<"enter height : ";
        cin>>num1;
        cout<<"enter base :";
        cin>>num2;
        cout<<"Area of the triangle is  "<<(num1* num2)/2;
        break;

        case '8':
        cout<<"enter length : ";
        cin>>num1;
        cout<<"enter breadth :";
        cin>>num2;
        cout<<"Area of the rectangle is  "<<num1* num2;
        break;

        case '9':
        cout<<"enter Principle : ";
        cin>>num1;
        cout<<"enter rate :";
        cin>>num2;
        cout<<"enter time :";
        cin>>num3;
        cout<<"Simple Interest :  "<<num1* num2*num3;
        break;

        default:
            // operator is doesn't match any case constant (1, 2, 3, 4...)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}