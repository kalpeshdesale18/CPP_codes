include<iostream>
using namespace std;
int main()
{
 char choice;
 int ch;
 int num1, num2;
 
 cout<<"************************************";
 cout<<"1 for addition";
 cout<<"2 for subtraction";                         //display the menu
 cout<<" 3 for multiplication";
 cout<<"4 for division";
 cout<<"**************************************";

 cout<<"enter your choice number":
 cin>>ch;
 switch (ch)
 {
    case 1:
    cout<<"enter the 1st number"<<endl;
    cin>>num1;
    cout<<"enter the 2nd number"<<endl;              //this is just for mathematical oprations but you can try switch case for other programming too
    cin>>num2;
    cout<<"The addition is="<<num1+num2;
    break;

    case 2:
    cout<<"enter the 1st number"<<endl;
    cin>>num1;
    cout<<"enter the 2nd number"<<endl;
    cin>>num2;
    cout<<"The subtraction is="<<num1-num2;
    break;

    case 3:
    cout<<"enter the 1st number"<<endl;
    cin>>num1;
    cout<<"enter the 2nd number"<<endl;
    cin>>num2;
    cout<<"The multiplication is="<<num1*num2;
    break;

    case 4:
    cout<<"enter the 1st number"<<endl;
    cin>>num1;
    cout<<"enter the 2nd number"<<endl;
    cin>>num2;
    cout<<"The division is="<<num1/num2;
    break;

    default:
    cout<<"invalid choice";


 }
    return 0;
}