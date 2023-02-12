#include <stdio.h> // include statement which imports the contents of a file to this file

int main(int argc, char *argv[]) // proper main function, must return 0, should have argc & argv
{ // curly braces which denote the body of a block
  int distance = 100; // integer declaration which must end in a semicolon

  printf("your are %d miles away.\n", distance); // print function, using %d for a digit

  return 0; // return from the main block that gives exit code 0
}
