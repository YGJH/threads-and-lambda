#include <iostream>

#define a 10
#define b 29
int main() {
	
	#if (a == 10) && (b==3)
	std::cout << a << ' ' << b << std::endl;
	#elif (a==10) && (b ==29)
	std::cout << a << ' ' << b << std::endl;
	#else 
	std::cout << "no answer" << std::endl;
	#endif
	return 0;
}
