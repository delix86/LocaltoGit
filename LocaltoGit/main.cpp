#include <iostream>
#include "Name.h"

//using namespace std;

int main() {
    using std::cout;
    std::cout << "Hi" << std::endl;

    //sayHello();

    PrintName();

    return 0;
}
void sayHello() {
    std::cout << "Hello" << std::endl;
}