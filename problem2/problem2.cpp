#include <iostream>

int main(){
    int limit = 4000000;
    int x = 1;
    int y = 1;
    int sum = 0;
    int result = 0;
    while(sum < limit){
        sum = x+y;
        // std::cout<<sum<<'\n';
        if(sum%2 == 0){
            result +=sum;
        }
        x = y;
        y = sum;
    }
    std::cout<<result;
    return 0;
}