/* Print a floating-point number in engineering notation */
/* Documentation: http://www.cs.tut.fi/~jkorpela/c/eng.html */

//#define MICRO "�"
#define MICRO "u"

#define BUFSIZE 100

#define PREFIX_START (-24)
/* Smallest power of ten for which there is a prefix defined.
   If the set of prefixes will be extended, change this constant
   and update the table "prefix". */

#include <stdio.h>
#include <math.h>

char *eng(double value, int digits, int numeric)
{
  static char *prefix[] = {
  "y", "z", "a", "f", "p", "n", MICRO, "m", "",
  "k", "M", "G", "T", "P", "E", "Z", "Y"
  }; 
#define PREFIX_END (PREFIX_START+\
(int)((sizeof(prefix)/sizeof(char *)-1)*3))

      int expof10;
      static unsigned char result[BUFSIZE];
      unsigned char *res = result;

      result[0] = 0;

      //fprintf(stderr, "val %e dig %d num %d res _%s_\n", value, digits, numeric, result);

      if (digits < 1)
	{
	  fprintf(stderr, "invalid digits: %d\n", digits);
	  return (char*)&result;
	}

      if (value < 0.)
        {
	  *res++ = '-';
	  value = -value;
        }
      if (value == 0.)
        {
	    return "0.0";
        }

      expof10 = (int) log10(value);
      if(expof10 > 0)
        expof10 = (expof10/3)*3;
      else
        expof10 = (-expof10+3)/3*(-3); 
 
      value *= pow(10,-expof10);

      if (value >= 1000.)
         { value /= 1000.0; expof10 += 3; }
      else if(value >= 100.0)
         digits -= 2;
      else if(value >= 10.0)
         digits -= 1;
      if (digits < 1) digits = 1;
      if (expof10 == 0)
	snprintf((char*)res, BUFSIZE, "%.*f", digits-1, value); 
      else if(numeric || (expof10 < PREFIX_START) || (expof10 > PREFIX_END))
        snprintf((char*)res, BUFSIZE, "%.*fe%d", digits-1, value, expof10); 
      else
        snprintf((char*)res, BUFSIZE, "%.*f%s", digits-1, value, 
		 prefix[(expof10-PREFIX_START)/3]);

      //fprintf(stderr, "val %e dig %d num %d res _%s_\n", value, digits, numeric, result);
      
      return (char*)result;
}
