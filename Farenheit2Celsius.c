#include <stdio.h>
/* print Farenheit-Celsius tabel
    for fahr = 0, 20, ...... */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /*Lower limit of the temp table*/
    upper = 300; /*Upper limit of the temp table*/
    step = 20; /*Step Size*/

    fahr = lower;
    printf("Farenheit to Celsius\n");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr+step;
    }
} 