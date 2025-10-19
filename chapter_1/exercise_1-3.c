#include "stdio.h"

double convertFahrToCelsius(const double fahrTemp)
{
    // The formula is: C = (5/9)(F - 32)
    return (5.0/9.0) * (fahrTemp - 32.0);
}

void printFahrToCelsiusCoversionInRange(const double startingTempFahr, const double endTempFahr, const double tempStep)
{
    double currTempFahr = startingTempFahr;
    printf("Fahr\tCelsius\n");
    while (currTempFahr < endTempFahr)
    {
        const double currTempCelsius = convertFahrToCelsius(currTempFahr);
        printf("%6.2f\t%6.2f\n", currTempFahr, currTempCelsius);

        currTempFahr += tempStep;
    }
}

int main()
{
    const double startingTempFahr = 0.0;
    const double endTempFahr = 200.0;
    const double tempStep = 20.0;

    printFahrToCelsiusCoversionInRange(startingTempFahr, endTempFahr, tempStep);

    return 1;
}