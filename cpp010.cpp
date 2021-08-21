#include <iostream>
using namespace std;

int main()
{
    int apple_number=60;
    int people=12;
    int apple_per_people;
    if(people!=0){
        apple_per_people=apple_number/people;
        cout<<"平均分配,每个人得"<<apple_per_people<<"个苹果"<<endl;
    }
    else
        cout<<"除数为0,出现异常"<<endl;

    return 0;
}