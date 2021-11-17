#include <stdio.h>

int main ()
{
    FILE * fpointer = fopen ("jendva.txt", "w" );
    {
        fprintf (fpointer, "jen dva tri");
    }
}