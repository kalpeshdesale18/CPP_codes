#include<iostream>
using namespace std;
int main()
{
    int num1 ,num2;
    cout<<"enter the number"<<endl;
cin>>num1;
cout<<"enter the 2nd number"<<endl;
cin>>num2;

if (num1>num2):
cout<<num1<<"is max";
else:
cout<<num2<< "is max";

    return 0;

}



// program for finding the largest number among 3 numbers


#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input 3 numbers
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Enter third number: ";
    cin >> c;

    // Check which is largest
    if (a >= b && a >= c) {
        cout << "The largest number is: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "The largest number is: " << b << endl;
    } else {
        cout << "The largest number is: " << c << endl;
    }

    return 0;
}
