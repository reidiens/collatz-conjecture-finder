#include <stdio.h>

#define EVENOP a/2              /* what to do if even/odd */ 
#define ODDOP a*3+1             /*                        */ 


// function that does all the math
int collatz(long int a) {      
    int count = 0;             // iteration counter 
    printf("\n# %7lu", a);
    while (a > 1) {             
        if (a % 2 == 0) {       // check if a is even
            count++;    
            printf("\n# %7lu", a = EVENOP);
        }     
        else {
            count++;
            printf("\n# %7lu", a = ODDOP);
        }
    }
    return count;
}

int main() {
    inp:                            // restart point if error is encountered
    long int a, org;
    printf("Enter a value:\n> ");
    scanf("%lu", &a);
    getchar();
    long int* b = &a;               // pointer for error checking
    if (a <= 0) {                   // checks for input error
        printf("\n** Please enter a positive, non-zero integer.\n\n");
        b = NULL;                   // deinitialize a (so that error check works multiple times)
        goto inp;                   
    }
    org = a;                        // store original value
    int iter = collatz(a);          // store the number of iterations
    printf("\nThe number %lu takes %d iterations to reach 1.", org, iter);
}

