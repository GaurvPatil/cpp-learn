#include <iostream>
#include <string>

int main()
{

   /* std::cout << "hello c++" << std::endl;
    std::cerr << "somehting is wrong" << std ::endl;
    std::clog << "log message" << std::endl;

    */

   /* int age1;
    std::string name;
    std::cout << "enter your name and age : " << std ::endl;

    std::cin >> name;
    std ::cin >> age1;


    std::cin >> name >> age1;
    std::cout << "hello " << name << " you are " << age1 << " years old" << std::endl;
 */

   // data with sapces

   std::string full_name;
   int age3;
   std::cout << "please enter your full name and age" << std::endl;
   std::getline(std ::cin, full_name);
   std ::cin >> age3;
   std::cout << "hello " << full_name << " your are " << age3 << " years old" << std::endl;

   return 0;
}