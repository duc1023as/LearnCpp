#include<iostream>
#include<string>

class Student{
    public:
        int age;
        std::string name;
        Student(std::string name,int age){
            this->age = age;
            this->name = name;
        }
        Student(Student &anotherStudent){
            this->name = anotherStudent.name;
            this->age = anotherStudent.age;
        }
        void display(){
            std::cout<<name<<std::endl<<age<<std::endl;
        }
};

int main(){
    Student DMD("DMD",24);
    Student DMA(DMD);
    DMD.display();
    DMA.display();
    return 0;
}