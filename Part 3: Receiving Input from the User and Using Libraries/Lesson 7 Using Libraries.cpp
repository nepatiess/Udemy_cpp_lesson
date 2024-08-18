#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main() {
    //1. sqrt
    cout << "1.sqrt: " << endl;
    double sqrt_number = 16.0;
    double sqrt_result = sqrt(sqrt_number);
    cout << "Square root of " << sqrt_number << " is " << sqrt_result << endl;
    cout << endl;
    
    //2. pow
    cout << "2.pow: " << endl;
    double base = 2.0;
    double pow_exponent = 3.0;
    double pow_result = pow(base, pow_exponent);
    cout << base << " raised to the power of " << pow_exponent <<
        " is " << pow_result << endl;
    cout << endl;

    //3.abs
    cout << "3.abs: " << endl;
    int abs_number = -10;
    int abs_result = abs(abs_number);
    cout << "Absolute value of " << abs_number << " is " << abs_result << endl;
    cout << endl;

    //4. ceil
    cout << "4.ceil: " << endl;
    double ceil_number = 4.7;
    double ceil_result = ceil(ceil_number);
    cout << "Ceiling of " << ceil_number << " is " << ceil_result << endl;
    cout << endl;

    //5. floor
    cout << "5.floor: " << endl;
    double floor_number = 4.7;
    double floor_result = floor(floor_number);
    cout << "Floor of " << floor_number << " is " << floor_result << endl;
    cout << endl;

    //6. fmod
    cout << "6.fmod: " << endl;
    double dividend = 7.5;
    double divisor = 2.5;
    double fmod_result = fmod(dividend, divisor);
    cout << "Modulus of " << dividend << " and " << divisor << " is " << fmod_result << endl;
    cout << endl;

    //7. sin, cos, tan
    double angle = 45.0; // Degrees
    double radians = angle * (M_PI / 180.0); // Convert degrees to radians
   
    cout << "7.a.sin: " << endl;
    double sineValue = sin(radians);
    cout << "Sine of " << angle << " degrees is " << sineValue << endl;

    cout << "7.b.cos: " << endl;
    double cosineValue = cos(radians);
    cout << "Cosine of " << angle << " degrees is " << cosineValue << endl;

    cout << "7.c.tan: " << endl;
    double tangentValue = tan(radians);
    cout << "Tangent of " << angle << " degrees is " << tangentValue << endl;
    cout << endl;

    //8. exp
    cout << "8.exp: " << endl;
    double exp_exponent = 2.0;
    double exp_result = exp(exp_exponent);
    cout << "Exponential of " << exp_exponent << " is " << exp_result << endl;
    cout << endl;

    //9. log
    cout << "9.log" << endl;
    double log_value = 10.0;
    double log_result = log(log_value);
    cout << "Natural logarithm of " << log_value << " is " << log_result << endl;
    cout << endl;

    return 0;
}