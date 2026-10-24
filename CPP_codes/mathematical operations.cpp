  
// here addition, subtraction , multiplication, division & square of a number .... programs are availabel  
  
  
  
  // program for Addition

#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 , num3 sum;             // you can take n numbers for the opration
    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter 2nd number";
    cin>>num2;
    cout<<"enter 3rd number";
    cin>>num3;
    sum=num1+num2+num3;                     // you can try this for subtraction too
    cout<<"The addition is="<<sum;
return 0;
}               //end


//program for subtraction
#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 , num3 sum;             // you can take n numbers for the opration
    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter 2nd number";
    cin>>num2;
    cout<<"enter 3rd number";
    cin>>num3;
    sum=num1-num2-num3;                      
    cout<<"The subtraction is="<<sum;

    return 0;
}




// Program for multiplication

#include<iostream>
using namespace std;
int main()
{
    int num1 , num2  sum;             // you can take n numbers for the opration
    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter 2nd number";
    cin>>num2;
     
    sum=num1*num2;                      
    cout<<"The Multiplication is="<<sum;

    return 0;
}

// Program for division

#include<iostream>
using namespace std;
int main()
{
    int num1 , num2 sum;              
    cout<<"enter 1st number";
    cin>>num1;
    cout<<"enter 2nd number";
    cin>>num2;
    
    sum=num1/num2;                      
    cout<<"The division is="<<sum;

    return 0;
}



// Program for square

#include<iostream>
using namespace std;
int main()
{
    int num1 , squ;              
    cout<<"enter  number";
    cin>>num1;
     
     squ=num1*num1;
    cout<<"The square of "<<num1 <<"is"<<squ;

    return 0;
}
