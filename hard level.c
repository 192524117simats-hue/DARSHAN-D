/*
//anagram
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

//reverse

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




//Prime Number Check in C

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}

//leap year
#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}


\\ fibonacci series
#include <stdio.h>

int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}


//factorial
#include <stdio.h>

int main() {
    int num;
    unsigned long long fact = 1;  // To hold large factorials

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if(num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for(int i = 1; i <= num; i++) {
            fact *= i;
        }
        printf("Factorial of %d is %llu\n", num, fact);
    }

    return 0;
}


//floyd triangle
#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
//swaps of two

#include <stdio.h>

void swap(int *a, int *b) {
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    // Call swap function using addresses
    swap(&x, &y);

    printf("After swapping:  x = %d, y = %d\n", x, y);

    return 0;
}
 //perfect square or not
 #include <stdio.h>
#include <math.h>

int main() {
    int num, sqrtResult;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate square root
    sqrtResult = sqrt(num);

    // Check if square of sqrtResult equals num
    if (sqrtResult * sqrtResult == num)
        printf("%d is a perfect square.\n", num);
    else
        printf("%d is not a perfect square.\n", num);

    return 0;
}
//check palindrome in number

#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number

    while(num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if(original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}

// pascal's triangle
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate nCr (combinations)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i = 0; i < rows; i++) {
        // Print leading spaces
        for(int space = 0; space < rows - i - 1; space++)
            printf("  ");

        for(int j = 0; j <= i; j++)
            printf("%4d", combination(i, j));

        printf("\n");
    }

    return 0;
}


//right angle triangle
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
//pyramid
#include <stdio.h>

int main() {
    int i, j, space, rows;

    printf("Enter the number of rows (half of diamond): ");
    scanf("%d", &rows);

    // Upper half
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }

        printf("\n");
    }

    // Lower half
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
//right angle triangle
#include <stdio.h>

int main() {
    int i, j, space, rows, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print increasing numbers
        num = 1;
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }

        printf("\n");
    }

    return 0;
}
// flyuid triangle
#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
// diamond
#include <stdio.h>

int main() {
    int i, j, space, rows;

    printf("Enter the number of rows (half of diamond): ");
    scanf("%d", &rows);

    // Upper half
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }

        printf("\n");
    }

    // Lower half
    for (i = rows - 1; i >= 1; i--) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
// reverse
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;              // Get last digit
        reversed = reversed * 10 + remainder; // Append to reversed number
        num = num / 10;                    // Remove last digit
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}
//perfect number
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find divisors and sum them
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if it's perfect
    if (sum == num) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is NOT a Perfect Number.\n", num);
    }

    return 0;
}
//spiral pattern
#include <stdio.h>

int main() {
    int n, i, rowStart = 0, rowEnd, colStart = 0, colEnd, num = 1;

    printf("Enter size of matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    rowEnd = colEnd = n - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        // Top row (left to right)
        for (i = colStart; i <= colEnd; i++) {
            matrix[rowStart][i] = num++;
        }
        rowStart++;

        // Right column (top to bottom)
        for (i = rowStart; i <= rowEnd; i++) {
            matrix[i][colEnd] = num++;
        }
        colEnd--;

        // Bottom row (right to left)
        for (i = colEnd; i >= colStart; i--) {
            matrix[rowEnd][i] = num++;
        }
        rowEnd--;

        // Left column (bottom to top)
        for (i = rowEnd; i >= rowStart; i--) {
            matrix[i][colStart] = num++;
        }
        colStart++;
    }

    // Print the spiral matrix
    printf("\nSpiral Matrix:\n");
    for (i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
//palindrome
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;  // Store original number

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a Palindrome.\n", original);
    } else {
        printf("%d is NOT a Palindrome.\n", original);
    }

    return 0;
}
//palindrome in string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);  // reads single word without spaces

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("'%s' is a Palindrome.\n", str);
    else
        printf("'%s' is NOT a Palindrome.\n", str);

    return 0;
}
//gcd
#include <stdio.h>

int main() {
    int num1, num2, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Loop to find GCD
    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
//right shif
#include <stdio.h>

int main() {
    int arr[100], n, i, last;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Store last element
    last = arr[n - 1];

    // Shift all elements to the right by 1
    for (i = n - 1; i > 0; i--)
        arr[i] = arr[i - 1];

    // Place last element at first position
    arr[0] = last;

    printf("Array after right shift:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

//lexicographical
#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    if (strcmp(str1, str2) < 0)
        printf("'%s' comes before '%s'\n", str1, str2);
    else
        printf("'%s' comes after '%s'\n", str1, str2);

    return 0;
}




