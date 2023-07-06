#include <iostream>
void converge(char targ, char src);
int main()
{
    char target = 'x';
    converge(target, 't');
    std::cout << "final string" << target << std::endl;
    return 0;
}

void converge(char targ, char src)
{

    std::cout << "targ: " << targ << std::endl;
    std::cout << "src: " << src << std::endl;
}



// #include <iostream>

// void converge(const char* targ, const char* src);

// int main()
// {
//     char target = "iosahwdehsf";
//     converge(target, "tthis is gaurav");
//     std::cout << "final string: " << target << std::endl;
//     return 0;
// }

// void converge(const char* targ, const char* src)
// {
//     std::cout << "targ: " << *targ << std::endl;
//     std::cout << "src: " << src << std::endl;
// }