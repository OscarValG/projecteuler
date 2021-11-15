#include <iostream>

int main(){
    int sumSq = 0, Sqsum = 0;
    for(int i = 1; i <= 100; i ++)
    {
        sumSq += (i*i);
        Sqsum += i;
    }
    Sqsum *= Sqsum;
    std::cout<<Sqsum - sumSq<< std::endl;
    return 0;
}