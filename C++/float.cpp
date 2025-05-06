#include<iostream>


int main(){

    float float_{1.12345678901234567890f};
    double double_{1.78955687979};
    long double long_double{1.12345678901234567890L} ;


    std::cout<< "size of " << sizeof(float_) << std::endl;
    std::cout<< "size of " << sizeof(double_) << std::endl;
    std::cout<< "size of " << sizeof(long_double) << std::endl;
    
}
