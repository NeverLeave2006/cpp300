#include <iostream>
using namespace std;

int main()
{
    int apple_number=60;
    int people=7;
    int apple_remain;
    if(people==0){
        cout<<"����"<<endl;
    }
    else{
        apple_remain=apple_number%people;
        cout<<"ƽ�������ʣ"<<apple_remain<<"��ƻ��"<<endl;
    }

    return 0;
}