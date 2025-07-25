#include<iostream>
#include<limits>

int main(){

    std::cout << " THE RANGE FOR SHORT IS FROM " << std::numeric_limits<short>::min() << " - TO - " << std::numeric_limits<short>::max() << std::endl;
    std::cout << " THE RANGE FOR UNSIGNED SHORT IS FROM " << std::numeric_limits<unsigned short>::min() << " - TO - " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << " THE RANGE FOR INT IS FROM " << std::numeric_limits<int>::min() << " - TO - " << std::numeric_limits<int>::max() << std::endl;
    std::cout << " THE RANGE FOR UNSIGNED INT IS FROM " << std::numeric_limits<unsigned int>::min() << " - TO - " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << " THE RANGE FOR LONG IS FROM " << std::numeric_limits<long>::min() << " - TO - " << std::numeric_limits<long>::max() << std::endl;
}