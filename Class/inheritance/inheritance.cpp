#include<iostream>

class Person{
    public:
        void display(){
            std::cout<<"Person"<<std::endl;
        }
};

class Student : private Person{
    public: 
        void displayStudent(){
            display();
            std::cout<<"Student"<<std::endl;
        }
};

int main(){
    Student x;
    x.displayStudent();
    return 0;
}