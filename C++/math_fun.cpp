#include<iostream>
#include<cmath>

int main(){
    

    /* std::floor() , ceil() , abs() , cos() , exp() , log() , pow() , sqrt() , round , sin() , tan() 
    
    these all maths function are found under cmath library {https://en.cppreference.com/w/cpp/header/cmath.html}*/

    double weight(7.77);

    //floor
    std:: cout << "Weight rounded to floor is : " << std :: floor(weight) << std :: endl;

    //ceil
    std:: cout << "Weight rounded to ceil is : " << std :: ceil(weight) << std :: endl;

    //abs
    double savings {-5000 };

    std::cout << "Abs of weight is : " << std :: abs(weight) << std :: endl;
    std:: cout << "Abs of savings is : " << std :: abs(savings) << std :: endl;

    std :: cout << "POWER OF 3 on 7 is " << pow (7,3) << std :: endl;
    std :: cout << "POWER OF 7 on 3 is " << pow (3,7) << std :: endl;


    std :: cout << "Value of cos " << cos(1.57) << std :: endl;
    std :: cout << "Value of tan " << cos(1.57) << std :: endl;
    std :: cout << "Value of sin " << cos(1.57) << std :: endl;
    std :: cout << "Value of cos " << cos(0) << std :: endl;

}