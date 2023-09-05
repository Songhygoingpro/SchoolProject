#include <stdio.h>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

double kilometersToMiles(double kilometers) {
    return kilometers * 0.621371;
}

double milesToKilometers(double miles) {
    return miles * 1.60934;
}

double hoursToMinutes(double hours) {
    return hours * 60;
}

double minutesToHours(double minutes) {
    return minutes / 60;
}

double usdToEur(double usd) {
    return usd * 0.85;
}

double eurToUsd(double eur) {
    return eur * 1.18;
}

double kilogramsToPounds(double kilograms) {
    return kilograms * 2.20462;
}

double poundsToKilograms(double pounds) {
    return pounds * 0.453592;
}

void saveConversionToFile(double input, double result, const char* conversionType) {
    FILE* file = fopen("conversion_history.txt", "a");
    if (file != NULL) {
        fprintf(file, "Input: %.2f\tResult: %.2f\tConversion: %s\n", input, result, conversionType);
        fclose(file);
    } else {
        printf("Error opening the file for saving the conversion history.\n");
    }
}

// void displayConversionHistory() {
//     FILE* file = fopen("conversion_history.txt", "r");
//     if (file != NULL) {
//         printf("Conversion History:\n");
//         char line[100];
//         while (fgets(line, sizeof(line), file) != NULL) {
//             printf("%s", line);
//         }
//         fclose(file);
//     } else {
//         printf("No conversion history found.\n");
//     }
// }

int main() {
    FILE *file;
    file = fopen("conversions.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
    }
    int choice;
    double value;
    
    
    printf("Unit Converter Menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Kilometers to Miles\n");
    printf("4. Miles to Kilometers\n");
    printf("5. Hours to Minutes\n");
    printf("6. Minutes to Hours\n");
    printf("7. USD to EUR\n");
    printf("8. EUR to USD\n");
    printf("9. Kilograms to Pounds\n");
    printf("10. Pounds to Kilograms\n");
    printf("Enter your choice (1-10): ");
    scanf("%d", &choice);
    printf("Enter the value to convert: ");
    scanf("%lf", &value);

    double result;
    const char* conversionType;
    switch (choice) {
    case 1:
        result = celsiusToFahrenheit(value);
        conversionType = "Celsius to Fahrenheit";
        printf("%.2f degrees Celsius is equal to %.2f degrees Fahrenheit.\n", value, result);
        break;
    case 2:
        result = fahrenheitToCelsius(value);
        conversionType = "Fahrenheit to Celsius";
        printf("%.2f degrees Fahrenheit is equal to %.2f degrees Celsius.\n", value, result);
        break;
    case 3:
        result = kilometersToMiles(value);
        conversionType = "Kilometers to Miles";
        printf("%.2f kilometers is equal to %.2f miles.\n", value, result);
        break;
    case 4:
        result = milesToKilometers(value);
        conversionType = "Miles to Kilometers";
        printf("%.2f miles is equal to %.2f kilometers.\n", value, result);
        break;
    case 5:
        result = hoursToMinutes(value);
        conversionType = "Hours to Minutes";
        printf("%.2f hours is equal to %.2f minutes.\n", value, result);
        break;
    case 6:
        result = minutesToHours(value);
        conversionType = "Minutes to Hours";
        printf("%.2f minutes is equal to %.2f hours.\n", value, result);
        break;
    case 7:
        result = usdToEur(value);
        conversionType = "USD to EUR";
        printf("%.2f USD is equal to %.2f EUR.\n", value, result);
        break;
    case 8:
        result = eurToUsd(value);
        conversionType = "EUR to USD";
        printf("%.2f EUR is equal to %.2f USD.\n", value, result);
        break;
    case 9:
        result = kilogramsToPounds(value);
        conversionType = "Kilograms to Pounds";
        printf("%.2f kilograms is equal to %.2f pounds.\n", value, result);
        break;
    case 10:
        result = poundsToKilograms(value);
        conversionType = "Pounds to Kilograms";
        printf("%.2f pounds is equal to %.2f kilograms.\n", value, result);
        break;
    default:
        printf("Invalid choice!\n");
        break;
}
     saveConversionToFile(value, result, conversionType);
    //displayConversionHistory();

    return 0;
}