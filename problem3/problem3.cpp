#include <iostream>

bool isPrime(int num);

int main(){
    unsigned long long int number = 600851475143,product = 1;
    int num = 0;
    std::cout<<"number:"<<number<<'\n';
    while(product < number){
        num++;
        if(isPrime(num)){
            if(number%num == 0){
                product *= num;
                std::cout<<"num:"<<num<<" product:"<<product<<'\n';
            }
        }
    }
    std::cout<<num;
    return 0;
}

bool isPrime(int num){
    if(num == 0 || num == 1 || num == 4) return false;
    for(int x = 2; x < num/2;x++){
        if(num%x == 0)return false;
    }
    return true;
}