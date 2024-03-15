#include <iostream>
#include <queue>

struct node{
    int a, b;
    bool  operator< (const node &q) const{
    	return q.a > a;
    }
};
signed main(){
    std::priority_queue<node> pq;
    for(int i = 1 ; i <= 10 ; i++) {
        node tmp;
        tmp.a = i , tmp.b = i * 10;
        pq.push(tmp);
    }
    for(int i = 1; i <= 10 ; i++) {
       	node tmp = pq.top();
	std::cout << tmp.a << ' ' << tmp.b << std::endl;
    	pq.pop();
    }
    return 0;
}
