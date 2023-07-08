#include <iostream>
#include <cstring>

int main()
{
    char str[20] = "";
    int x;

    for (x = 0; x < 3 && strcmp(str, "password"); ++x){
        std::cout << "please enter password : " << std::endl;
        gets(str);
      
    }

    if (x == 3) return 0;
}