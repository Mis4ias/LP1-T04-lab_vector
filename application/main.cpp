#include "veclass.h"

int main (){
	Vectors<int> test(4);
	Vectors<int> oders(4);
	Vectors<int> concat(test.get_size() + oders.get_size());
	std::cin>>test;
	std::cout<<test;
return 0;
}
