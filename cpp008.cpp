#include <iostream>
using namespace std;

int main()
{
    int a=10;
    int b=2;
    int c;
    c=a&b;
    cout<<"��a��b���а�λ���Ľ��Ϊ:"<<c<<endl;
    c=a|b;
    cout<<"��a��b���а�λ���Ľ��Ϊ:"<<c<<endl;
    c=a^b;
    cout<<"��a��b���а�λ����Ľ��Ϊ:"<<c<<endl;
    c=~a;
    cout<<"��a���а�λ�󷴺�Ľ��Ϊ:"<<c<<endl;
    c=a<<1;
    cout<<"��a�����ƶ�һλ��Ľ��Ϊ:"<<c<<endl;
    c=a>>1;
    cout<<"��a�����ƶ�һλ��Ľ��Ϊ:"<<c<<endl;
    return 0;
}