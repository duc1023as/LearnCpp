#include<iostream>
#include<string>

template<class T> double SumofNumbers(T number1,T number2){
    return number1 + number2;
}

template<class T, class T1> double SumofNumbers(T number1, T1 number2, T1 number3){
    return number1 + number2 +number3;
}

template<class T, class T1> // template<class T,int x>
class Product{
    private:
        T price;
        T1 name;
    public:
        Product(T price, T1 name){
            this->price = price;
            this->name = name;
        }
        void display(){
            std::cout<<price<<std::endl;
            std::cout<<name<<std::endl;
        }
};

int main(){
    std::cout<<SumofNumbers(10,45)<<std::endl;
    std::cout<<SumofNumbers(10,10.3,10.5)<<std::endl;
    Product<int,std::string> Redmi(10,"China");
    Redmi.display();
    return 0;
}