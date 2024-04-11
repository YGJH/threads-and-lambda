#include <iostream>
#include <vector>
void function(int value) {
    std::cout << "Value: " << value << std::endl;
}

void For_each(std::vector<int> v , void(func)(int i)) {
    for(auto i : v) 
        func(i);
}

signed main() {
    std::vector<int> v = {5 , 4 , 3, 2 , 1};
    For_each(v , function);
}

