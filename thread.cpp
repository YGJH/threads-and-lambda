#include <iostream>
#include <thread>

bool s_finished = false;
void Dowork() {
	register int a = 1;
	using namespace std::literals::chrono_literals;
	while(!s_finished) {
		printf("working...%d\n" , a++);
		std::this_thread::sleep_for(1s);
		//printf("\r");
	}
}
signed main() {
	std::thread worker(Dowork);
	std::cin.get();
	s_finished = true;
	worker.join();
	std::cin.get();
	return 0;
}



