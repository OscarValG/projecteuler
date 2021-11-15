#include <iostream>

int main()
{
    int smaller = 21;
    while(true)
    {
        bool flag = true;
        for(int i = 2; i < 21; i++)
        {
            if(smaller%i != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag){
            std::cout<<smaller<<std::endl;
            return 0;
        }
        smaller++;
    }
    return 0;
}