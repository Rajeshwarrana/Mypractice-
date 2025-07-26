#include<iostream>

// Tools
const int Pen{ 10 };
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };                   

int main(){

    int tool{Rectangle};                                // ":" is used in switch statement instead of ";"

    switch(tool){
        case Pen:{
            std::cout << "ACTIVE TOOL IS PEN" << std::endl;          
            break;
        }
        case Marker:{
            std::cout << "ACTIVE TOOL IS MARKER" << std::endl;
            break;
        }       
        case Eraser:{
            std::cout << "ACTIVE TOOL IS ERASER" << std::endl;
            break;
        }   
        case Rectangle:{
            std::cout << "ACTIVE TOOL IS RECTANGLE" << std::endl;
            break;
        }
        case Circle:{
            std::cout << "ACTIVE TOOL IS CIRCLE" << std::endl;
            break;
        }
        case Ellipse:{
            std::cout << "ACTIVE TOOL IS ELLIPSE" << std::endl;
            break;
        }
        default:{
            std::cout << "NOT TOOL IS ACTIVE" << std::endl;
            break;
        }
    }
}