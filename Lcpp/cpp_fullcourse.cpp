#include <iostream>
#include <algorithm> 
#include <string>    

int main()
{
    int x = 121;
    std::string str = std::to_string(x);    
    std::string originalStr = str;
    std::reverse(str.begin(), str.end());
    if (originalStr == str)
    {
        std::cout << "isTrue" << std::endl;
    }
    else 
    {
        std::cout << "isFalse" << std::endl;
    }

    return 0;
}