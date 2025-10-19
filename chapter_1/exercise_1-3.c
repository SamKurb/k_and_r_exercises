#include "stdio.h"

double convertFahrToCelsius(const double fahrTemp)
{
    // The formula is: C = (5/9)(F - 32)
    return (5.0/9.0) * (fahrTemp - 32.0);
}

void printPlusMinusLineOfLength(int length)
{
    const char plus = '+';
    const char minus = '-';

    char currChar = plus;
    for (int i = 0 ; i < length ; ++i)
    {
        printf("%c", currChar);

        currChar == plus ? (currChar = minus) : (currChar = plus);
    }
    printf("\n");
}

void printFahrToCelsiusCoversionInRange(const double startingTempFahr, const double endTempFahr, const double tempStep)
{
    double currTempFahr = startingTempFahr;
    printf("Fahrenheit    Celsius\n");

    const int borderLineLength = 23;
    printPlusMinusLineOfLength(borderLineLength);

    while (currTempFahr < endTempFahr)
    {
        const double currTempCelsius = convertFahrToCelsius(currTempFahr);
        printf("|%10.2f |%8.2f |\n", currTempFahr, currTempCelsius);

        currTempFahr += tempStep;
    }
    printPlusMinusLineOfLength(borderLineLength);
}

int main()
{
    const double startingTempFahr = 0.0;
    const double endTempFahr = 200.0;
    const double tempStep = 20.0;

    printFahrToCelsiusCoversionInRange(startingTempFahr, endTempFahr, tempStep);

    return 1;
}