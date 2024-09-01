// converter.h serves as a bridge between the main.c 
// and converter.c files. It contains the function prototypes 
// for the temperature conversion functions celsiusToFahrenheit 
// and fahrenheitToCelsius. By including converter.h in main.c, 
// the compiler knows about these functions and can call them in the main program. 
// This separation of function declarations and implementations 
// helps to organize the code and make it more modular and maintainable.

// Header Guards, which are used to prevent multiple inclusions of the same header file
// This ensures that the content of the file are only included once in the compilation process
#ifndef CONVERTER_H // This check if "CONVERTER_H" is NOT defined. If it has not been defined, the code continues.
#define CONVERTER_H // This defines "CONVERTER_H" so next time this header file is included, the compiler will skip its content, aviding multiple inclusions.


// Function prototypes for temperature conversion
// This tells the compiler the names of the functions and their parameters
float celsiusToFahrenheit(float celsius);
float fahrenheitToCelsius(float fahrenheit);
// Function prototypes allow functions to be called before their full implementation is known to the compiler
//When these functions are called in main.c, the compiler knows their names and parameter types, allowing the code to compile successfully

// End of the header guard
// This marks the end of the header guard, preventing multiple inclusions of the same header file
// Which is the one you are in right now.
#endif // CONVERTER_H
