#include <iostream>

int MAX = 100;
int LEN = 80;
char text[MAX][LEN];
int main()
{
    int t, i, j;

    std::cout << "\nEnter empty line to quite" << std ::endl;
    for (t = 0; t < MAX; t++)
    {

        std::cout << "t : " << t << std::endl;
        gets(text[t]);
        if (!*text[t])
            break;
    }

    for (i = 0; i < t; i++)
    {

        for (j = 0; text[i][j]; j++)
        {
            putchar("\n");
        }
    }

    return 0;
}