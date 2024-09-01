/*This is the main file. */
/*Which will handle user interface */
/*and call functions from the other files */

// Include the standard input/output header file
#include <stdio.h>

// Include the header file
#include "converter.h"

int main()
{
    // Declare the variables
    // choice: to store the user's choice
    int choice;
    // temp: to store the temperature entered by the user
    float temp, result;
    // Display the message to the user
    printf("Enter the temperature in Celsius: ");

    // Start of the do-while loop
    // The loop will run until the user chooses to exit
    // The code repeats as long as the condition inside the while loop is true
    // Which is the user has not chosen to the "Exit" option
    do {
        // Display the menu to the user
        printf("\nTemperature Converter\n");
        printf("---------------------\n");
        // Display the menu options
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Fahrenheit to Celsius\n");
        printf("3. Exit\n");

        // Ask the user to enter the choice
        printf("Enter your choice: ");
        // Read the user's choice
        scanf("%d", &choice);

        // Check the user's choice
        // If the user chooses to exit, break out of the loop
        if (choice == 3)
        {
            // Notify the user that the program is exiting
            printf("Exiting the program...\n");
            // Break out of the loop
            // In this case the conversion code will not be executed
            break;
        }

        // Perform the conversion based on the choice
        // The switch statement is used to perform different actions based on the user's choice
        switch (choice)
        {
            // If the user chooses option 1
        case 1:
            printf("Enter the temperature in Celsius: ");
            scanf("%f", &temp);
            // Call the function to convert Celsius to Fahrenheit
            // which is defined in the converter.c file
            result = celsiusToFahrenheit(temp);
            printf("The temperature in Fahrenheit is: %.2f\n", result);
            break;
            // If the user chooses option 2
        case 2:
            printf("Enter the temperature in Fahrenheit: ");
            scanf("%f", &temp);
            // Call the function to convert Fahrenheit to Celsius
            // which is defined in the converter.c file
            result = fahrenheitToCelsius(temp);
            printf("The temperature in Celsius is: %.2f\n", result);
            break;
            // If the user chooses an invalid option
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } 
    // While statement to check the condition
    // choice is not equal to 3 by default unless the user chooses to exit
    while (choice != 3);

// Return 0 to indicate successful completion of the program
    return 0;
}
