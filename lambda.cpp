#include <iostream>
#include <vector>
#define endl '\n'

void function(std::vector<int> value , void(*func)(int)) {
	for(auto i : value) 
		func(i);
}
signed main() {
	std::vector<int> v = {1 ,2 ,3 ,4 ,5};
	function(v , [](int value){std::cout << "Value: " << value << endl;});
	return 0;
}
