#include <stdio.h>
#include <stdlib.h>

main()
{
  float fathr , celsius;
  int lower,upper ,step;
  
  lower = 0;
  upper = 300;
  step = 20;
  fathr  = lower ;
  
  while(fathr <=upper)
  	{
  		celsius = 5*(fathr-32)/9;
  		printf("%3.0f  \t  %6.1f  \n",fathr,celsius);//%3.0f �ϥ�3��B���L�p���I %6.1f �ϥ�6��L�@��p��   
  		fathr = fathr+step;
	}
 
  return 0;
}
