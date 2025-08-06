
/*#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int n1, n2, i, k;

    // Input size and elements of first array
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size and elements of second array
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merge arrays
    for(i = 0; i < n1; i++) {
        merged[i] = a[i];
    }
    for(k = 0; k < n2; k++) {
        merged[i + k] = b[k];
    }

    // Print merged array
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a[100], n, pos, i;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input position to delete (0-based index)
    printf("Enter the position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    // Check if position is valid
    if(pos > 0 || pos < n)
        for(i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
    }
    else {
        // Shift elements left to remove the element at pos
        printf("invalid chice");
        }
        n--; // Reduce array size

        // Print the updated array
        printf("Array after deleting element at position %d:\n", pos);
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }


    return 0;
}
#include <stdio.h>

int main() {
    int a[100], n, i, pos, elem;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input element to insert and its position
    printf("Enter the element to insert: ");
    scanf("%d", &elem);
    printf("Enter the position to insert (0 to %d): ", n);
    scanf("%d", &pos);

    // Check for valid position
    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the right
        for(i = n; i > pos; i--) {
            a[i] = a[i - 1];
        }

        // Insert element
        a[pos] = elem;
        n++; // Increase array size

        // Print updated array
        printf("Array after insertion:\n");
        for(i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}


#include <stdio.h>

int main() {
    int a[100], n, i, j, k;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Removing duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; ) {
            if(a[i] == a[j]) {
                // Shift elements left to remove duplicate
                for(k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--; // Reduce size
            } else {
                j++; // Only move j if no deletion happened
            }
        }
    }

    // Output after removing duplicates
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int a[100], freq[100];
    int n, i, j, count;

    // Input array size
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1; // Initialize frequency array
    }

    // Count frequencies
    for(i = 0; i < n; i++) {
        count = 1;
        if(freq[i] != 0) {
            for(j = i + 1; j < n; j++) {
                if(a[i] == a[j]) {
                    count++;
                    freq[j] = 0; // Mark as counted
                }
            }
            freq[i] = count;
        }
    }

    // Print frequencies
    printf("\nFrequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", a[i], freq[i]);
        }
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a[100], b[100], n, i, equal = 1;

    // Input size of arrays
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    // Input first array
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    // Compare arrays
    for(i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            equal = 0;
            break;
        }
    }

    // Result
    if(equal)
        printf("Both arrays are equal.\n");
    else
        printf("Arrays are not equal.\n");

    return 0;
}
#include <stdio.h>

int main() {
    int arr[100], n;

    // Input size and elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Remove duplicates
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift elements left and reduce size
                for(int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;    // Decrease array size
                j--;    // Stay at same index after shifting
            }
        }
    }

    // Output result
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
#include <stdio.h>
void main()
 {
 double ch;
 printf("enter a value between 1 to 2:");
 scanf("%lf", &ch);
 switch (ch)
 {
case 1:
 printf("1");
 break;
 case 2:
 printf("2");
 break;
  }
 }*/
 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure for account
typedef struct {
    int acc_no;
    char name[50];
    int pin;
    float balance;
} Account;

#define MAX_ACCOUNTS 100

// Function declarations
int loadAccounts(Account accounts[]);
void saveAccounts(Account accounts[], int count);
int login(Account accounts[], int count);
void showMenu(Account *user);
void checkBalance(Account *user);
void deposit(Account *user);
void withdraw(Account *user);

int main() {
    Account accounts[MAX_ACCOUNTS];
    int total = loadAccounts(accounts);
    int index = login(accounts, total);

    if (index != -1) {
        showMenu(&accounts[index]);
        saveAccounts(accounts, total);
    } else {
        printf("Login failed. Exiting...\n");
    }

    return 0;
}

// Load accounts from file
int loadAccounts(Account accounts[]) {
    FILE *file = fopen("accounts.txt", "r");
    int i = 0;

    if (file == NULL) {
        printf("No accounts file found. Creating new file...\n");
        file = fopen("accounts.txt", "w");
        fclose(file);
        return 0;
    }

    while (fscanf(file, "%d %s %d %f", &accounts[i].acc_no, accounts[i].name, &accounts[i].pin, &accounts[i].balance) != EOF) {
        i++;
    }

    fclose(file);
    return i;
}

// Save accounts back to file
void saveAccounts(Account accounts[], int count) {
    FILE *file = fopen("accounts.txt", "w");
    for (int i = 0; i < count; i++) {
        fprintf(file, "%d %s %d %.2f\n", accounts[i].acc_no, accounts[i].name, accounts[i].pin, accounts[i].balance);
    }
    fclose(file);
}

// Login function
int login(Account accounts[], int count) {
    int acc_no, pin, tries = 0;

    printf("==== Welcome to ATM ====\n");
    while (tries < 3) {
        printf("Enter Account Number: ");
        scanf("%d", &acc_no);
        printf("Enter PIN: ");
        scanf("%d", &pin);

        for (int i = 0; i < count; i++) {
            if (accounts[i].acc_no == acc_no && accounts[i].pin == pin) {
                printf("Login successful. Welcome, %s!\n", accounts[i].name);
                return i;
            }
        }

        tries++;
        printf("Invalid credentials. Attempts left: %d\n", 3 - tries);
    }

    return -1;
}

// Show ATM Menu
void showMenu(Account *user) {
    int choice;
    do {
        printf("\n----- ATM Menu -----\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance(user);
                break;
            case 2:
                deposit(user);
                break;
            case 3:
                withdraw(user);
                break;
            case 4:
                printf("Thank you for using ATM.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
}

// Check balance
void checkBalance(Account *user) {
    printf("Current Balance: ₹%.2f\n", user->balance);
}

// Deposit money
void deposit(Account *user) {
    float amount;
    printf("Enter amount to deposit: ₹");
    scanf("%f", &amount);

    if (amount > 0) {
        user->balance += amount;
        printf("₹%.2f deposited successfully.\n", amount);
    } else {
        printf("Invalid amount.\n");
    }
}

// Withdraw money
void withdraw(Account *user) {
    float amount;
    printf("Enter amount to withdraw: ₹");
    scanf("%f", &amount);

    if (amount > 0 && amount <= user->balance) {
        user->balance -= amount;
        printf("₹%.2f withdrawn successfully.\n", amount);
    } else {
        printf("Invalid or insufficient balance.\n");
    }
}

