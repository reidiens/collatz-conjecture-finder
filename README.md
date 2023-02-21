# Collatz Conjecture Finder

Will perform the Collatz Conjecture on a user-given input.
Starting with the user input, the program will:

  - Divide the value by 2 if it is even, or
  - Multiply the value by 3 and add 1 if it is odd

This process is repeated with every newly-generated input until it reaches 1, at which point it would get stuck in a loop of 4, 2, 1 if it kept going. No number has ever evaded the 4, 2, 1 loop, though it is not proven that every number will fall into it.

This is a very, very basic program, made as a fun little way for me to experiment with C.


## How To Use:
Like I said, this program is very basic. You have to compile it yourself. I'm not entirely sure how this is done on a Windows device but if you use GCC, it's pretty easy:

First, in a terminal, navigate to the folder where you downloaded to using the `ls` command or its equivalent.

Next, type 
``` gcc main.c -o [OUTPUT FILE NAME] ```
to compile the source and output an executable file in the same folder as the source. The output name does not matter.

After that, use 
```./[OUTPUT FILE NAME]```
to run the file in your terminal.

These instructions may not be totally correct for Windows or MacOS, but I don't care enough to check. It works on Linux, and that's all that really matters.


##  Known Errors/Stuff to fix

  - Integers sometimes become too large and overflow
  - There is no dedicated exit button. You have to use Ctrl+C to exit the program

