#include<iostream>
#include<iomanip>

int main(){
    int col_width {20};
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::left;
    std::cout << std::setw(col_width) << "FIRST NAME" << std::setw(col_width) << "   LAST NAME" << std::setw(col_width) << "AGE" << std::endl ;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << std::setw(col_width) << "RAJESHWAR" << std::setw(col_width) << "RANA" << std::setw(col_width) << "18" << std::endl ;
    std::cout << std::setw(col_width) << "BHAVYA" << std::setw(col_width) << "BISEN" << std::setw(col_width) << "19" << std::endl ;
    std::cout << std::setw(col_width) << "SOUMYA" << std::setw(col_width) << "BISEN" << std::setw(col_width) << "18" << std::endl ;
    std::cout << std::setw(col_width) << "YASH" << std::setw(col_width) << "BISEN" << std::setw(col_width) << "18" << std::endl ;
    std::cout << std::setw(col_width) << "SAMEER" << std::setw(col_width) << "MISHRA" << std::setw(col_width) << "18" << std::endl ;
    


    std::cout << "-------------------------------------------------------------------------------" << std::endl;


    std::cout << "HELLO";
    std::cout << "WORLD" << std::endl;

    std::cout << "------------------------------------------" << std::endl;

    std :: cout << "HELLO" << std :: endl;
    std :: cout << "WORLD" << std :: endl;


    return 0;


}