#include<iostream>

int main(){

    int age = 0;
    int age1{0};
    int age2(0);

    std::cout<<age<<" "<<age1<<" "<<age2<<std::endl;

    std::cout<<"SIZE is"<<sizeof(int)<<std::endl;
    std::cout<<"SIZE is"<<sizeof(age1)<<std::endl;

    return 0;



}