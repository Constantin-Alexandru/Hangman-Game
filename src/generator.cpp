#include "generator.h"

#include <fstream>
#include <iostream>

std::string Generator::getNword(int n)
{

    std::string word_file_path = "./assets/words.txt";

    std::ifstream in(word_file_path);

    int max_n;

    in >> max_n;

    in.ignore();

    n = max_n > n ? n : max_n - 1;

    for(int i = 0; i < n; i++)
    {
        std::string ignore;
        std::getline(in, ignore, '\n');
    }

    std::string word = "temp";

    std::getline(in, word, '\n');

    in.close();

    return word;

}