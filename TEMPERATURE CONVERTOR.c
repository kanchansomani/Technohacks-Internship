#include <stdio.h>

int main() {
    char choice;
    double temperature, convertedTemperature;

    
    printf("Enter temperature: ");
    scanf("%lf", &temperature);

    
    printf("Choose conversion type ('F' for Fahrenheit to Celsius, 'C' for Celsius to Fahrenheit): ");
    scanf(" %c", &choice);  

    
    switch (choice) {
        case 'F':
        case 'f':
            convertedTemperature = (temperature - 32) * 5 / 9;
            printf("%.2lf Fahrenheit is equal to %.2lf Celsius\n", temperature, convertedTemperature);
            break;
        case 'C':
        case 'c':
            convertedTemperature = (temperature * 9 / 5) + 32;
            printf("%.2lf Celsius is equal to %.2lf Fahrenheit\n", temperature, convertedTemperature);
            break;
        default:
            printf("Error: Invalid choice. Please enter 'F' or 'C'.\n");
            return 1; 
    }

    return 0;
}

