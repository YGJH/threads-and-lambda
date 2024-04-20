#include <iostream>
#ifndef a
#define a 1
#endif
#ifdef a
int main() {
	printf("%d" , a);
	return 0;
}
#endif
