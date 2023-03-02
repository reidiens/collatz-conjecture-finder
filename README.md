# Collatz Conjecture Finder

Will perform the Collatz Conjecture on a user-given input.
Starting with the user input, the program will:

  - Divide the value by 2 if it is even, or
  - Multiply the value by 3 and add 1 if it is odd

This process is repeated with every newly-generated input until it reaches 1, at which point it would get stuck in a loop of 4, 2, 1 if it kept going. No number has ever evaded the 4, 2, 1 loop, though it is not proven that every number will fall into it.

This is a very, very basic program, made as a fun little way for me to experiment with C.

##  Known Errors/Stuff to fix

  - Integers sometimes become too large and overflow
  - There is no dedicated exit button. You have to use Ctrl+C to exit the program
  - No error checking for if a character/negative number are inputted.

