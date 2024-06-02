#include <stdio.h>
#include <stdbool.h>

int content()
{
    int j = 0;
    int i = 0;

    // [1]
    // IF statement example
    // Controlling expression
    if (i > 25)
    {
        // Dependent block {}
        j = i - 25;
    }
    else
    {
        j = i;
    }

    // [2]
    // IF statement example
    if (i = 0)
        printf("i = 0");
    else
        printf("i != 0");

    // [3]
    // FOR loop
    for (size_t i = 0; i < 5; i++)
    {
        if (i)
        {
            printf("element %zu is %g, \tits square is %g\n",
                   i,
                   0,
                   0);
        }
    }

    // [4]
    // The value 0 represents logical FALSE, anything else is TRUE

    // [5]
    // Don't compare to 0, false, or true
    // Do as below
    bool i = true;
    if (i)
    {
        printf("Wow");
    }

    // [6]
    // All scalars have a truth value, look at scalars.png

    // [7]
    // LOOPS
    // break and continue statements are quite useful
    // break immidiately stops the loop
    double const eps = 1E-9;
    double const a = 34.0;
    double x = 0.5;

    while (true)
    {
        double prod = a * x;
        if (fabs(1.0 - prod) < eps)
        { // Stops if close enough
            break;
        }
        x *= (2.0 - prod);
    }

    // Similar way to write while(true) but with for
    for (;;)
    {
        double prod = a * x;
        if (fabs(1.0 - prod) < eps)
        { // Stops if close enough
            break;
        }
        x *= (2.0 - prod);
    }

    // continue statement just skips to the next loop without re-evaluating the rest of the block
}