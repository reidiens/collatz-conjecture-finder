#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define EVENOP a/2              /* what to do if even/odd */ 
#define ODDOP a*3+1             /*                        */ 

#define SIGCHARS 1              // num. of significant chars for strncmp


// function that does all the math
int collatz(long int a) {      
    int count = 0;              // iteration counter 
    printf("\n# %7lu", a);      // format to 7 spaces to account for large nums
    while (a > 1) {             
        if (a % 2 == 0) {       // check if a (start_num) is even
            count++;            
            printf("\n# %7lu", a = EVENOP);     // print & store new value at the same time
        }     
        else {
            count++;
            printf("\n# %7lu", a = ODDOP);
        }
    }
    return count;
}

int main() {
    system("clear");                 // clear the terminal on startup

    init:                            // restart point if error is encountered
    long int start_num, org_num;     // starting number; original number   (long int to account for large values)     

    printf("Enter a value:\n> ");
    scanf("%lu", &start_num);
    getchar();
    org_num = start_num;                        // store original value

    if (start_num <= 0) {                   // checks for input error
        printf("\n** Please enter a positive, non-zero integer.\n\n");
        goto init;                   
    }

    int iter = collatz(start_num);          // store the number of iterations (iter = iterations)
    printf("\nThe number %lu takes %d iterations to reach 1.", org_num, iter);

    printf("\n\nGo again? ");
    char res[10];                     // 10 is an arbitrary value (res = restart)
    scanf("%s", res);
    printf("\n");                   // give space b/w "Go again?" text and "Enter value" text if "y" is input
    getchar();
    
    if (strncmp(res, "yes\n", SIGCHARS) == 0 || strncmp(res, "Yes\n", 1) == 0) {
        org_num = 0;
        goto init;
   }
}
