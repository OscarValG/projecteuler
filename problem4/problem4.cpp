#include <iostream>
#include <vector>
bool isPalindrome(int number);

int main(){
    std::vector<int> palindrome;
    for(int x = 999;x >= 100 ; x--)
    {
        for(int y = 999;y >= 100; y--)
        {
            int number = x * y;
            if(isPalindrome(number))
            {
                palindrome.push_back(number);
            }
        }
    }
    int max = 0;
    for(int i = 0; i < palindrome.size(); i++)
    {
        if(palindrome[i] > max)
            max = palindrome[i];
    }
    std::cout<<max<<std::endl;
    return 0;
}

bool isPalindrome(int number){
    std::vector<int> palindrome;
    int div = 100000;
    for(int i = 0; i < 6 ; i++)
    {
        palindrome.push_back(number/ div);
        number -= ((number/div)*div);
        div /= 10;
    }
    int back = 5;
    for(int i = 0; i < 3; i++)
    {
        if(palindrome[i] != palindrome[back])
            return false;

        back--;
    }   
    return true;
}