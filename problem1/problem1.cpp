#include <iostream>


int main() {
	int resultado = 0;
	for(int i = 1; i < 1000; i++){
		if(i%3 == 0 || i%5 == 0){
			// std::cout<<i<<'\n';
			resultado +=i;
		}
	}
	std::cout<<'-'<<resultado;
}
