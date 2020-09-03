// Author: Abigail Bowen aeb6095@psu.edu
// Collaborator: Ethan Wertz evw5316@psu.edu
// Collaborator: David Oke doo5136@psu.edu
// Collaborator: Kelly McVeigh kam7563@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *temperature = readline("Enter temperature in celsius: ");
  double celsius = atof(temperature);
  double fahrenheit = ((celsius * 9/5) + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.",celsius, fahrenheit);
  return 0;
}