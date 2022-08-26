#include<iostream>

double division(const int &number1,const int &number2){
    if(!number2){
        throw "Attempted to divide by zero";
    }
    return number1/number2;
}

int main(){
    std::cout<<"Exception Example"<<std::endl;
    int number1,number2;
    std::cin>>number1>>number2;
    try{
        std::cout<<division(number1,number2);
    }catch(const char *e){
        std::cout<<e<<std::endl;
    }
    return 0;
}