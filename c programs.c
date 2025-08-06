#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to catch stray newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result = %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
#include <stdio.h>

int main() {
    int row, col, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];

    printf("Enter elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", (*(arr + i) + j)); // or &arr[i][j]
        }
    }

    // Calculate sum using pointers
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            sum += *(*(arr + i) + j);  // dereferencing pointer to get value
        }
    }

    printf("Sum of all elements: %d\n", sum);

    return 0;
}
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sqrtVal = sqrt(num);

    if (sqrtVal * sqrtVal == num)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }

    printf("Sum of even numbers between 1 and 100: %d\n", sum);

    return 0;
}
#include <stdio.h>
#define PI 3.142

int main() {
    float radius, area;

    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of Circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}
#include <stdio.h>

int main() {
    int a, b, gcd, lcm, i;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find GCD
    for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0)
            gcd = i;
    }

    // Calculate LCM using the formula: LCM = (a * b) / GCD
    lcm = (a * b) / gcd;

    printf("GCD of %d and %d is %d\n", a, b, gcd);
    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}
#include <stdio.h>

int main() {
    int a, b, i, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b; ++i) {
        // check if i is a common factor of both
        if (a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d is %d.\n", a, b, hcf);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    result = strcmp(str1, str2);

    if (result == 0) {
        printf("Both strings are equal.\n");
    } else if (result > 0) {
        printf("String1 is greater.\n");
    } else {
        printf("String2 is greater.\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[]) {
    int count[256] = {0}; // Supports all ASCII characters
    int i;

    // Step 1: Lengths must be equal
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    // Step 2: Count character frequencies
    for (i = 0; str1[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // Step 3: If counts are all zero, strings are anagrams
    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    else
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);

    return 0;
}
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("%s is a palindrome\n", str);
    else
        printf("%s is not a palindrome\n", str);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if two strings are anagrams
bool areAnagrams(char str1[], char str2[]) {
    int count[256] = {0};  // For all ASCII characters
    int i;

    // If lengths are not equal, return false
    if (strlen(str1) != strlen(str2))
        return false;

    // Count character frequencies
    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2))
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    else
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool areAnagrams(char str1[], char str2[]) {
    int count[256] = {0}; // for all ASCII characters
    int i;

    // If lengths are not equal, not anagrams
    if (strlen(str1) != strlen(str2))
        return false;

    // Count characters
    for (i = 0; str1[i] && str2[i]; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0)
            return false;
    }

    return true;
}

int main() {
    char str1[] = "hectare";
    char str2[] = "teacher";

    if (areAnagrams(str1, str2))
        printf("'%s' and '%s' are anagrams.\n", str1, str2);
    else
        printf("'%s' and '%s' are not anagrams.\n", str1, str2);

    return 0;
}
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to catch stray newline

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result = %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result = %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result = %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int num = 2;

    switch(num) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        default:
            printf("Other number\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;
    int size = n * 2 - 1; // 9 for n=5
    int a[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int min = i < j ? i : j;
            if (size - i - 1 < min)
                min = size - i - 1;
            if (size - j - 1 < min)
                min = size - j - 1;
            a[i][j] = n - min;
        }
    }

    // Print the pattern
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

