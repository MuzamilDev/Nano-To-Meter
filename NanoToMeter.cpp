#include<iostream>
using namespace std;

int main()
{

    float nanometer , meter;
    cout<<"Enter Nanometer that is to be converted into meter"<<endl;
    cin>>nanometer;

    meter = nanometer/1000000000;

    cout<<"The Nanometer in Meter is: "<<meter<<endl;

   return 0;
}
