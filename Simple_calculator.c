#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float valueOne;
  float valueTwo;
  char operato;
  float answer;

  printf("Enter calculation in two terms :\n\n");
  scanf("%f %c %f", &valueOne, &operato, & valueTwo);

  switch(operato)
    {
    case '/': answer = valueOne/valueTwo;
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    case '^': answer = pow(valueOne,valueTwo);
      break;
    case ' ': answer = sqrt(valueTwo);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operato, valueTwo, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}