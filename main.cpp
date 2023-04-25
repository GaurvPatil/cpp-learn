#include <iostream>
#include <string>

int main()
{


int int_var {49};
int *p_int {&int_var};

std::cout << "adreess is :" << *p_int << std::endl;

   return 0;
}