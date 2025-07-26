#include<iostream>

int main(){
    
    int num1 {20};
    int num2 {50};

    bool result = (num1 > num2);

    std :: cout << std :: boolalpha << "result :" << result << std :: endl;
    std :: cout << std :: endl;

    if (result == true){
        std :: cout << num1 << " is greater than " << num2 << std :: endl;
    }
    if (!(result == true)){
        std :: cout << num1 << " is not greater than " << num2 << std :: endl;
    }

    return 0;

}