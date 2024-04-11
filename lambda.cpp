#include <iostream>
#include <vector>
#include <functional>
#define endl '\n'

int For_each(std::vector<int> value , const std::function<int(int)> &func) {
	int ret = -1;
	for(auto i : value)
	{
		ret = func(i);
		if(ret != -1) {
			return ret;
		}
	}
	return -1;
}

signed main() {
	int a;
	std::cin >> a;
	std::vector<int> v = {1 ,2 ,3 ,4 ,5};
	auto lambda = [=](int value){
		return value > a;
	};
	auto it = find_if(v.begin() , v.end() , lambda);
	std::cout << *it << endl;
	return 0;
}
