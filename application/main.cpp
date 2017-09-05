#include "veclass.h"

int main (){
	Vectors<int> test(4);
	Vectors<int> oders(4);
	Vectors<int> con((test.get_size() + oders.get_size()));
	std::cin>>test;
	std::cout<<test;
	std::cin>>oders;
	std::cout<<oders;
	con.concat(test, oders);
	std::cout<<con;
return 0;
}
