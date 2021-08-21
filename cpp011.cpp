#include <iostream>
using namespace std;

int main()
{
    int apple_number=60;
    int people=7;
    int apple_remain;
    if(people==0){
        cout<<"错误"<<endl;
    }
    else{
        apple_remain=apple_number%people;
        cout<<"平均分配后还剩"<<apple_remain<<"个苹果"<<endl;
    }

    return 0;
}