//
// Created by Mateev, Nikolay on 10/10/17.
//

#include "myfunctions.h"

int mystrlen(const char*& word)
{
    int length = 0;
    while(word[length] != '\0')
        length++;

    return length;
}

void mystrcpy(char*& destination, const char* source)
{
    size_t sourceLength = mystrlen(source);

    destination = new char[sourceLength + 1];
    for(int i = 0; i <= sourceLength; i++)
    {
        destination[i] = source[i];
    }
}