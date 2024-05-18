// Menu Driven Program using Functions in C
#include <stdio.h>
#include <conio.h>

// Declaring the functions
void odd_even();
void prime();

// Function to check whether a number is odd or even.
void odd_even(){
    // Numeric Input
    int num;
    printf("\nEnter a number:");
    scanf("%d", &num);
    
    // Odd-Even checker
    if(num % 2 == 0){
        printf("Number %d is EVEN\n", num);
    }
    else{
        printf("Number %d is ODD\n", num);
    }
}

// Function to check whether a number is prime or not.
void prime(){
    // Numeric Input
    int num;
    printf("\nEnter a number:");
    scanf("%d", &num);
    
    // Flag variable for prime numbers
    int flag = 1;
    
    // Prime checker
    for(int i=2; i*i <= num; i++){
        if(num % i == 0){
            flag = 0;
            break;
        }
    }
    
    // Output
    if(flag){
        printf("Number %d is PRIME\n", num);
    }
    else{
        printf("Number %d is NOT PRIME\n", num);
    }
}

// Driver code
int main() {
    // Choice variable
    int choice = -1;
    
    // Menu display
    printf("MENU:\n1. Check_Odd/Even\n2. Check_Prime\n3. Exit");
    
    // Flag variable for termination of loop
    int flag = 1;
    
    // Infinite Loop for choice input
    while(flag){
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        
        // Switch statements
        switch(choice){
            case 1:
                odd_even();
                break;
            case 2:
                prime();
                break;
            case 3:
                printf("BYE!!!\n");
                flag = 0;  // To terminate the loop
                break;
            default:
                printf("> Invalid Input\n");
                break;
        }
    }
    return 0;
}
