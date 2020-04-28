#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int *numbers = NULL;
    int capacity = 0;

    int size = 0;
    while (true)
    {
        int number = get_int("Number: ");

        if (number == INT_MAX) 
        {
            break; 
        }

        if (size == capacity)
        {
            numbers = realloc(numbers, sizeof(int) * (size + 1));
            capacity++; 
        }

        numbers[size ] = number;
        size++;

    for (int i = 0; i < size; i++)
    {
        printf("You inputted %", number[i])
    }

    }
}