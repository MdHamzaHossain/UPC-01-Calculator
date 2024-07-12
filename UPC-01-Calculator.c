/**
 * Advanced UPC 01 calculator
 * Hamza Hossain (UPC-01)
 */
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

float arithmatics(char opr)
{
    float result, a, b;
    switch (opr)
    {
    case 'a':
        // Addition
        printCategory("Addition");
        printf("\nEnter two numbers: ");
        scanf("%f%f", &a, &b);
        printCategory("Addition");
        result = a + b;

        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("%.2f + %.2f = %.2f", a, b, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    case 'b':
        // Subtraction
        printCategory("Subtraction");
        printf("\nEnter two numbers: ");
        scanf("%f%f", &a, &b);
        printCategory("Subtraction");
        result = a - b;

        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("%.2f - %.2f = %.2f", a, b, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    case 'c':
        // Multiplication
        printCategory("Multiplication");
        printf("\nEnter two numbers: ");
        scanf("%f%f", &a, &b);
        printCategory("Multiplication");
        result = a * b;

        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("%.2f * %.2f = %.2f", a, b, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    case 'd':
        // Division
        printCategory("Division");
        printf("\nEnter two numbers: ");
        scanf("%f%f", &a, &b);
        if (b == 0)
            printError("x/0 is INFINITY");

        printCategory("Division");
        result = a / b;

        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("%.2f / %.2f = %.2f", a, b, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    case 'e':
        // Modulo Division
        printCategory("Modulo Division");
        printf("\nEnter two numbers: ");
        scanf("%f%f", &a, &b);
        printCategory("Modulo Division");
        result = (int)a % (int)b;

        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("%.2f %% %.2f = %.2f", a, b, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    }
    return result;
}
float convertDegreeToRadian(float degree)
{
    // 1 radian is PI/180 degree
    return degree * M_PI / 180;
}
float convertRadianToDegree(float radian)
{
    // 1 degree is 180/PI degree
    return radian * 180 / M_PI;
}
float trigonometry(char opr)
{
    float result, angle;

    switch (opr)
    {
    case 'f':
        // Sine
        printCategory("sin(x)");
        printf("\nEnter the angle in degrees: ");
        scanf("%f", &angle);
        printCategory("sin(x)");

        result = sin(convertDegreeToRadian(angle));
        printf("\n\n");
        centerPadStringPrint(29, "");
        printf("sin(%.2f) = %.2f", angle, result);
        centerPadStringPrint(29, "");
        printf("\n");
        break;
    case 'g':
        // Cosine
        printCategory("cos(x)");
        printf("\nEnter the angle in degrees: ");
        scanf("%f", &angle);
        printCategory("cos(x)");
        result = cos(convertDegreeToRadian(angle));
        printf("\n\n");
        centerPadStringPrint(29, "");
        printf("cos(%.2f) = %.2f", angle, result);
        centerPadStringPrint(29, "");
        printf("\n");
        break;
    case 'h':
        // Tangent
        printCategory("tan(x)");
        printf("\nEnter the angle in degrees: ");
        scanf("%f", &angle);
        printCategory("tan(x)");
        // If the angle is an integer and is a divisor of
        if (((int)angle == angle) && (((int)angle - 90) % 180 == 0))
            printError("tan(90) is INFINITY");
        result = tan(convertDegreeToRadian(angle));
        printf("\n\n");
        centerPadStringPrint(29, "");
        printf("tan(%.2f) = %.2f", angle, result);
        centerPadStringPrint(29, "");
        printf("\n");
        break;
    case 'i':
        // Cotangent
        printCategory("cot(x)");
        printf("\nEnter the angle in degrees: ");
        scanf("%f", &angle);
        printCategory("cot(x)");
        result = 1 / tan(convertDegreeToRadian(angle));
        printf("\n\n");
        centerPadStringPrint(29, "");
        printf("cot(%.2f) = %.2f", angle, result);
        centerPadStringPrint(29, "");
        printf("\n");
        break;
    case 'j':
        // Secant
        printCategory("sec(x)");
        printf("\nEnter the angle in degrees: ");
        scanf("%f", &angle);
        printCategory("sec(x)");
        result = 1 / cos(convertDegreeToRadian(angle));
        printf("\n\n");
        centerPadStringPrint(29, "");
        printf("sec(%.2f) = %.2f", angle, result);
        centerPadStringPrint(29, "");
        printf("\n");
        break;
    case 'k':
        // Cosecant
        printCategory("cosec(x)");
        printf("\nEnter the angle in degrees: ");
        scanf("%f", &angle);
        printCategory("cosec(x)");
        result = 1 / sin(convertDegreeToRadian(angle));
        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("cosec(%.2f) = %.2f", angle, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    }
}
float inverseTrigonometry(char opr)
{
    float result;
    float value;

    switch (opr)
    {
    case 'l':
        // Inverse Sine
        printCategory("Inverse sin(x)");
        printf("\nEnter the value: ");
        scanf("%f", &value);
        printCategory("Inverse sin(x)");

        // Sine's range is [-1,1]
        if (!(value >= -1 && value <= 1))
            printError("Please enter a value between [-1,1]");

        result = convertRadianToDegree(asin(value));
        printf("\n\n");
        centerPadStringPrint(25, "");
        printf("Inverse sin(%.2f) = %.2f", value, result);
        centerPadStringPrint(25, "");
        printf("\n");
        break;
    case 'm':
        // Inverse Cosine
        printCategory("Inverse cos(x)");
        printf("\nEnter the value: ");
        scanf("%f", &value);
        printCategory("Inverse cos(x)");

        // Cosine's range is [-1,1]
        if (!(value >= -1 && value <= 1))
            printError("Please enter a value between [-1,1]");

        result = convertRadianToDegree(acos(value));
        printf("\n\n");
        centerPadStringPrint(25, "");
        printf("Inverse cos(%.2f) = %.2f", value, result);
        centerPadStringPrint(25, "");
        printf("\n");
        break;
    case 'n':
        // Inverse Tangent
        printCategory("Inverse tan(x)");
        printf("\nEnter the value: ");
        scanf("%f", &value);
        printCategory("Inverse tan(x)");
        result = convertRadianToDegree(atan(value));
        printf("\n\n");
        centerPadStringPrint(25, "");
        printf("Inverse tan(%.2f) = %.2f", value, result);
        centerPadStringPrint(25, "");
        printf("\n");
        break;
    case 'o':
        // Inverse Cotangent
        printCategory("Inverse cot(x)");
        printf("\nEnter the value: ");
        scanf("%f", &value);
        printCategory("Inverse cot(x)");

        result = convertRadianToDegree(atan(1 / value));
        printf("\n\n");
        centerPadStringPrint(25, "");
        printf("Inverse cot(%.2f) = %.2f", value, result);
        centerPadStringPrint(25, "");
        printf("\n");
        break;
    case 'p':
        // Inverse Secant
        printCategory("Inverse sec(x)");
        printf("\nEnter the value: ");
        scanf("%f", &value);
        printCategory("Inverse sec(x)");
        // Secant's range is R-[-1,1]
        if ((value >= -1 && value <= 1))
            printError("Please enter a value not between [-1,1]");

        result = convertRadianToDegree(acos(1 / value));
        printf("\n\n");
        centerPadStringPrint(25, "");
        printf("Inverse sec(%.2f) = %.2f", value, result);
        centerPadStringPrint(25, "");
        printf("\n");
        break;
    case 'q':
        // Inverse Cosecant
        printCategory("Inverse cosec(x)");
        printf("\nEnter the value: ");
        scanf("%f", &value);
        printCategory("Inverse cosec(x)");
        // Cosecant's range is R-[-1,1]
        if ((value >= -1 && value <= 1))
            printError("Please enter a value not between [-1,1]");

        result = convertRadianToDegree(asin(1 / value));
        printf("\n\n");
        centerPadStringPrint(24, "");
        printf("Inverse cosec(%.2f) = %.2f", value, result);
        centerPadStringPrint(24, "");
        printf("\n");
        break;
    }
}

float power(char opr)
{
    float result, a, b;
    switch (opr)
    {
    case 'r':
        // root
        printCategory("root(x)");
        printf("\nEnter the value: ");
        scanf("%f", &a);
        printCategory("root(x)");
        result = pow(a, .5);
        printf("\n\n");
        centerPadStringPrint(29, "");
        printf("root(%.2f) = %.2f", a, result);
        centerPadStringPrint(29, "");
        printf("\n");
        break;
    case 's':
        // square
        printCategory("square(x)");
        printf("\nEnter the value: ");
        scanf("%f", &a);
        printCategory("square(x)");
        result = pow(a, 2);
        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("square(%.2f) = %.2f", a, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    case 't':
        // power
        printCategory("power(x)");
        printf("\nEnter two numbers: ");
        scanf("%f", &a);
        scanf("%f", &b);
        printCategory("power(x)");
        result = pow(a, b);
        printf("\n\n");
        centerPadStringPrint(28, "");
        printf("%.2f ^ %.2f = %.2f", a, b, result);
        centerPadStringPrint(28, "");
        printf("\n");
        break;
    case 'u':
        // exponential
        printCategory("exponential(x)");
        printf("\nEnter the value: ");
        scanf("%f", &a);
        printCategory("exponential(x)");
        result = exp(a);
        printf("\n\n");
        centerPadStringPrint(30, "");
        printf("e ^ %.2f = %.2f", a, result);
        centerPadStringPrint(30, "");
        printf("\n");
        break;
    }
    return result;
}
float logarithm(char opr)
{
    float result, a, b;
    switch (opr)
    {
    case 'v':
        // log a (b)
        printCategory("(base)log(x)");
        printf("\nEnter the base and a number: ");
        scanf("%f", &a);
        scanf("%f", &b);
        printCategory("(base)log(x)");
        result = log(b) / log(a);
        printf("\n\n");
        centerPadStringPrint(23, "");
        printf("(base %.2f) log(%.2f) = %.2f", a, b, result);
        centerPadStringPrint(23, "");
        printf("\n");
        break;
    case 'w':
        // ln (x)
        printCategory("ln(x)");
        printf("\nEnter a number: ");
        scanf("%f", &a);
        printCategory("ln(x)");
        result = log(a) / log(exp(1));
        printf("\n\n");
        centerPadStringPrint(29, "");
        printf("ln(%.2f) = %.2f", a, result);
        centerPadStringPrint(29, "");
        printf("\n");
        break;
    }
    return result;
}
void printError(char errorMessage[])
{
    system("cls");
    printf("You've encountered an error. Please start Over!\n\n");
    printf("%s\n\n", errorMessage);
    exit(1);
}
void printMenu()
{
    printf("Menu: \n");
    printf("%-25s%-25s%-25s%-25s%-25s \n", "[a]. Addition", "[f]. sin(x)", "[k]. cosec(x)", "[p]. Inverse sec(x) ", "[u]. e^x");
    printf("%-25s%-25s%-25s%-25s%-25s \n", "[b]. Subtraction", "[g]. cos(x)", "[l]. Inverse sin(x)", "[q]. Inverse cosec(x)", "[v]. (base a)log(b)");
    printf("%-25s%-25s%-25s%-25s%-25s \n", "[c]. Multiplication", "[h]. tan(x)", "[m]. Inverse cos(x)", "[r]. root", "[w].  ln(x)");
    printf("%-25s%-25s%-25s%-25s \n", "[d]. Division", "[i]. cot(x)", "[n]. Inverse tan(x)", "[s]. square");
    printf("%-25s%-25s%-25s%-25s \n", "[e]. Modulo Division", "[j]. sec(x)", "[o]. Inverse cot(x)", "[t]. power");
}
void printHeader()
{
    int i;
    for (i = 0; i < 75; i++)
        printf("=");
    printf("\n");
    printf("||");
    centerPadStringPrint(72, "UPC-01 Calculator");
    printf("||\tBy Hamza Hossain\n");
    for (i = 0; i < 75; i++)
        printf("=");
    printf("\n\n");
}
void printCategory(char oprChoice[])
{
    system("cls");
    printHeader();
    centerPadStringPrint(75, oprChoice);
}
void centerPadStringPrint(int length, char str[])
{
    int strLength = strlen(str);
    int l = (length - strLength) / 2;
    int i;
    for (i = 0; i < l; i++)
        printf(" ");
    printf("%s", str);
    for (i = 0; i < l; i++)
        printf(" ");
}
int main()
{
    char operationChoice;
    float num1, num2, result;
    printHeader();
    printMenu();
    printf("\n\nPick an operation: ");
    scanf("%c", &operationChoice);
    operationChoice = tolower(operationChoice);

    if (operationChoice >= 'a' && operationChoice <= 'e')
        arithmatics(operationChoice);
    else if (operationChoice >= 'f' && operationChoice <= 'k')
        trigonometry(operationChoice);
    else if (operationChoice >= 'l' && operationChoice <= 'q')
        inverseTrigonometry(operationChoice);
    else if (operationChoice >= 'r' && operationChoice <= 'u')
        power(operationChoice);
    else if (operationChoice >= 'v' && operationChoice <= 'w')
        logarithm(operationChoice);
    else
        printError("Please pick a valid operator!");

    return 0;
}
// hmz
