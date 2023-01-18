#include <iostream>
#include <stdlib.h>

#include "generator.h"

#define WORD_COUNT 5

int main(int argc, char const *argv[])
{
    int n;

    srand(time(NULL));

    for(int i = 0; i < 100; i++)
    {
        n = rand() % WORD_COUNT + 1;

        std::cout<<Generator::getNword(n) << '\n';
    }
    
    



    return 0;
}
