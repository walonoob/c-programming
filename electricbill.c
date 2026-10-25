#include <stdio.h>

// Q1. Function to calculate electricity bill
float calculateElectricBill(int units) {
    float bill = 0.0;
    
    if (units <= 100) {
        bill = units * 10.0;
    } else if (units <= 200) {
        bill = (100 * 10.0) + ((units - 100) * 15.0);
    } else {
        bill = (100 * 10.0) + (100 * 15.0) + ((units - 200) * 20.0);
    }
    
    return bill;
}

// Q2. Function to calculate fare
float calculateFare(float distance) {
    float ratePerKm = 50.0;
    return distance * ratePerKm;
}

// Q3. Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

int main() {
    // Testing Q1: Calculate Electric Bill
    int units = 250;
    printf("--- Q1: Electric Bill ---\n");
    printf("Units consumed: %d\n", units);
    printf("Total bill: Ksh. %.2f\n\n", calculateElectricBill(units));

    // Testing Q2: Calculate Fare
    float distance = 10.0;
    printf("--- Q2: Fare Calculation ---\n");
    printf("Distance traveled: %.1f km\n", distance);
    printf("Total fare: Ksh. %.2f\n\n", calculateFare(distance));

    // Testing Q3: Temperature Conversion
    float fahrenheit = 98.6;
    printf("--- Q3: Fahrenheit to Celsius ---\n");
    printf("Temperature in Fahrenheit: %.1f°F\n", fahrenheit);
    printf("Temperature in Celsius: %.2f°C\n", convertToCelsius(fahrenheit));

    return 0;
}
