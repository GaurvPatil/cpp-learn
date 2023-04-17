#include <iostream>
#include <string>

int main()
{

   // barced initializer
   /*  int elephant_count;
     int lion_count{};
     int dog_count{10};
     int cat_count{15};
     */

   // functional initialization
   /*  int elephant_count;
     int lion_count;
     int dog_count(10);
     int cat_count(15.5);
     */

   // Assigment initialization

   int elephant_count;
   int lion_count;
   int dog_count = 10;
   int cat_count = 15.5;

   int domesticates_animals{dog_count + cat_count};

   std::cout << "elepehent count: " << elephant_count << std::endl;
   std::cout << "lion count: " << lion_count << std::endl;
   std ::cout << "dog count: " << dog_count << std::endl;
   std ::cout << "cat count: " << cat_count << std::endl;
   std::cout << "domestic animals: " << domesticates_animals << std::endl;

   return 0;
}