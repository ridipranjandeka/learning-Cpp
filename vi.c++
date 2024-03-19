/*c++ program to swap two numbers with the help of third variable*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"\n\n Swap two numbers:\n";
    cout<<"......................\n";
    int n1=2,n2=5,temp;
    cout<<"Before swapping the 1st number is:"<<n1<<"\n";
    cout<<"Before swapping the 2nd number is:"<<n2<<"\n";
    temp=n2;
    n2=n1;
    n1=temp;
    cout<<"After swapping the 1st number is:"<<n1<<"\n";
    cout<<"After swapping the 2nd number is :"<<n2<<"\n";
    return 0;
}