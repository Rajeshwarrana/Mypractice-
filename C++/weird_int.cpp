#include<iostream>

int main(){

    //integral type less than 4 bytes do not support arithmetic operattions like {char , short int}

    short int var1 {10}; // 2 bytes
    short int var2 {20};
    short int var6 {20};
    
    char var3 {40}; // 1 bytes
    char var4 {50};
    char var5 {50};

    std :: cout << "size of var1 :" << sizeof(var1) << std :: endl;
    std :: cout << "size of var2 :" << sizeof(var2) << std :: endl;
    std :: cout << "size of var3 :" << sizeof(var3) << std :: endl;
    std :: cout << "size of var4 : " << sizeof(var4) << std :: endl;

    auto result1 = var1 + var2 + var6 ;    // this auto will take size of [int] not [short int]
    auto result2 = var3 + var4 + var5 ;    // this auto will take size of [int] not [char]

    std :: cout << "size of result1:" << sizeof(result1) << std :: endl;
    std :: cout << "size of result2:" << sizeof(result2) << std :: endl;

    return 0;

    //same behaviour is present at other operator like bitwise shift operators << , >>

}