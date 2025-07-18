#include<iostream>

int main(){

    short _short_{-32768};
    short int short_int{122};
    signed short signed_short{122};
    signed short int signed_short_int{-545};
    unsigned short int unsigned_short_int{456};



    int int_var{55};
    signed signed_var{66};
    signed int signed_int{77};
    unsigned int unsigned_int{77};


    long long_var{88};
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};



    std::cout << "===============================" << std::endl;
    std::cout << "NUMBER IS : " << _short_ <<" | " << sizeof(_short_) << std::endl;
    std::cout << "NUMBER IS : " << short_int <<" | " << sizeof(short_int) << std::endl;
    std::cout << "NUMBER IS : " << signed_short <<" | " << sizeof(signed_short) << std::endl;
    std::cout << "NUMBER IS : " << signed_short_int <<" | " << sizeof(signed_short_int) << std::endl;
    std::cout << "NUMBER IS : " << unsigned_short_int <<" | " << sizeof(unsigned_short_int) << std::endl;
    std::cout << "===============================" << std::endl;


    std::cout << "NUMBER IS : " << int_var <<" | " << sizeof(int_var) << std::endl;
    std::cout << "NUMBER IS : " << signed_var <<" | " << sizeof(signed_var) << std::endl;
    std::cout << "NUMBER IS : " << signed_int <<" | " << sizeof(signed_int) << std::endl;
    std::cout << "NUMBER IS : " << unsigned_int <<" | " << sizeof(unsigned_int) << std::endl;
    std::cout << "===============================" << std::endl;

    std::cout << "NUMBER IS : " << long_var <<" | " << sizeof(long_var) << std::endl;
    std::cout << "NUMBER IS : " << long_int <<" | " << sizeof(long_int) << std::endl;
    std::cout << "NUMBER IS : " << signed_long <<" | " << sizeof(signed_long) << std::endl;
    std::cout << "NUMBER IS : " << signed_long_int <<" | " << sizeof(signed_long_int) << std::endl;
    std::cout << "NUMBER IS : " << unsigned_long_int <<" | " << sizeof(unsigned_long_int) << std::endl;
    std::cout << "===============================" << std::endl;

}  