#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int b=2;
    int c;
    c=a&b;
    cout<<"对a和b进行按位与后的结果为:"<<c<<endl;
    c=a|b;
    cout<<"对a和b进行按位或后的结果为:"<<c<<endl;
    c=a^b;
    cout<<"对a和b进行按位异或后的结果为:"<<c<<endl;
    c=~a;
    cout<<"对a进行按位求反后的结果为:"<<c<<endl;
    c=a<<1;
    cout<<"对a向左移动一位后的结果为:"<<c<<endl;
    c=a>>1;
    cout<<"对a向右移动一位后的结果为:"<<c<<endl;
    return 0;
}