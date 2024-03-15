#include <iostream>
#include <thread>

int main(){
    char name[100];
    std::cin.get(name , sizeof(name));
    std::cout << name << std::endl;
    return 0;
}
