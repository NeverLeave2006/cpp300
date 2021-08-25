#include <iostream>
using namespace std;

int main()
{
    int year;
    cin>>year;
    if(year%400==0)
        cout<<year<<"年是闰年"<<endl;
    else
    {
        if((year % 4 ==0)&&(year%100!=0))
            cout<<year<<"年是闰年"<<endl;
        else
            cout<<year<<"年不是闰年"<<endl;
    }
    return 0;
}