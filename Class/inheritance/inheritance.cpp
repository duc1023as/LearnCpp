#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    std::string a,b;
    std::cin>>a>>b;
    std::cout<<a.size()<<" "<<b.size()<<std::endl;
    std::cout<<a+b<<std::endl;
    char temp;
    temp = a[0];
    a[0] = b [0];
    b[0] = temp;
    std::cout<<a<<" "<<b<<std::endl;
    return 0;
}