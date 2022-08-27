#include<iostream>
#include<string>

class Student{
    public:
        int age;
        std::string name;
        static std::string University;// syntax static in class
        Student(){
            std::cout<<"Constructor"<<std::endl;
        }
        Student(std::string name,int age){
            this->age = age;
            this->name = name;
        }
        Student(Student &anotherStudent){
            this->name = anotherStudent.name;
            this->age = anotherStudent.age;
        }
        ~Student(){
            std::cout<<"Destructor"<<std::endl;
        }
        void display(){
            std::cout<<name<<std::endl<<age<<std::endl;
        }
};

std::string Student::University = "HCMUT"; // syntax static in class

int main(){
    Student DMD("DMD",24);
    Student DMA(DMD);
    DMD.display();
    DMA.display();
    std::cout<<DMD.University<<std::endl;// syntax static in class
    return 0;
}