#include<iostream>

using namespace std;

int main()
{
    double num,sqrtrt;
    cout<<"enter the number:-";
    cin>>num;
    cout<<"square="<<num*num<<endl;
    for(int i=0;i<=num;i++)
    {
        if(num/i==i)
        {
            cout<<"square root="<<i<<endl;
            sqrtrt+=1;

        }
       
        
    }
    if(sqrtrt<1)
    {
        cout<<"not a perfect square"<<endl;
    }
   

    return 0;

    
}