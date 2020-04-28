// using struct.h

#include <cs50.hh>
#include <stdio.h>

#include "struct.h"

int main(void)
{
    // space for students
    int enrollment = get_int("Enrollment: ");
    student students[enrollment];

    // line 12 same as writing:
    // string names[enrollment];
    // string dorms[enrollment];

    // prompt for students' names and dorms 
    for (int i = 0; i < enrollment; i++)
    {
        students[i].name = get_string("Name: ");
        students[i].dorm = get_string("Dorm: ");
    }

}
