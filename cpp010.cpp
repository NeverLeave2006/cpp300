#include <iostream>
using namespace std;

int main()
{
    int apple_number=60;
    int people=12;
    int apple_per_people;
    if(people!=0){
        apple_per_people=apple_number/people;
        cout<<"ƽ������,ÿ���˵�"<<apple_per_people<<"��ƻ��"<<endl;
    }
    else
        cout<<"����Ϊ0,�����쳣"<<endl;

    return 0;
}