#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // not dynamic
    // int capacity = 2;

    // doesn't count for negative value errors
    // int capacity = get_int("Capacity: ");
 
    int capacity; 
    do 
    {
        capacityy = get_int("Capacity: ")
    }
    while (capacity < 1);
    int numbers[capacity];

    int size = 0;
    while (size < capacity)
    {
        int number = get_int("Number: ");
        numbers[size] = number;
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("inputted %i\n", numbers[i]);
    }
}