# Collatz Conjecture Finder v3

Will perform the Collatz Conjecture on a user-given input.
Starting with the user input, the program will:

  - Divide the value by 2 if it is even, or
  - Multiply the value by 3 and add 1 if it is odd

This process is repeated with every newly-generated input until it reaches 1, at which point it would get stuck in a loop of 4, 2, 1 if it kept going. No number has ever evaded the 4, 2, 1 loop, though it is not proven that every number will fall into it.

This is a very, very basic program, made as a fun little way for me to experiment with C.


## Changelog
v3 has the following changes:

  - Added a way to restart the program.
  - Reorganized some code.
  - Renamed variables to be more informational.


##  Known Errors/Stuff to fix

  - Integers sometimes become too large and overflow
  - Entering an invalid number after restarting performs the conjecture for the previous value entered and exits the program
  - Entering too many characters when choosing whether or not to restart causes the same issue stated above (at least it's better than stack smashing)
 
I'm pretty sure problems 2 and 3 could be solved if there were a way to manually destruct variables on the stack, but alas.

