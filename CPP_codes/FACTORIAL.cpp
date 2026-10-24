#include<iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long factorial =1;

    cout<<"enter the positive integer:";        // factorial of negative number doesn't exist
    cin>>n;

    if (n<0)
    cout<<"Factorial is not defined for negative numbers";

    else{
        for (int i = 1;i<=n;++i){
            factorial *=i;
        }
        
        cout<<"Factorial of "<<n<<"="<< factorial;
    }

    return 0;
}