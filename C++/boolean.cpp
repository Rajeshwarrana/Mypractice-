#include<iostream>

int main(){

    bool red_area{true};
    bool green_area{true};


    if(red_area == true){
        std::cout<< "STOP" << std::endl; 
    }
    else{
        std::cout << "GO ON" << std::endl;
    }

    if(green_area == true ){
        std::cout << "STOP" << std::endl;
    }
    else{
        std::cout << "GO AWAY" << std::endl;
    }


    std::cout << red_area << std::endl;
    std::cout << green_area << std::endl;
 

    std::cout << std::boolalpha;
    std::cout << red_area << std::endl;
    std::cout << green_area << std::endl;


}