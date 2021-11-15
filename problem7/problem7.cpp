#include <iostream>
#include <vector>

bool isPrime(int number);

int main(){
    std::vector<int> primes;
    int number = 0;
    while(primes.size() < 10001)
    {
        if(isPrime(number))
            primes.push_back(number);
        
        number++;
    }    
    std::cout<<primes.back()<<std::endl;
    return 0;
}

bool isPrime(int number) {
  if (number == 0 || number == 1 || number == 4) return false;
  for (int x = 2; x < number / 2; x++) {
    if (number % x == 0) return false;
  }
  return true;
}