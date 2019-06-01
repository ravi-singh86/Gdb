#include <iostream>
using namespace std;

int main()
{
	int num;
	std::cout<<"Enter number "<<std::endl;
	std::cin >> num;
	int factorial;
	
	for(int i=1; i<=num; ++i){
		factorial *=i;
	}
	std::cout<<factorial<<"factgrv, "<<std::endl;
	return 0;
}
