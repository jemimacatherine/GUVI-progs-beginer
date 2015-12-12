#include <stdio.h>
#include<string.h>
void main()
{
      char str [81];
      int c = 0, count[26] = {0},ndigit=0, other=0; /* char counts */
      int i;
       printf("Enter a line of text:\n");
      gets(str);
      /* count characters in string str */
      /* init counts */
      i = 0;
      while (str[i] != '\0')
          {
              char ch= str[i];
              if (ch>= 'A' && ch<= 'Z' || ch>= 'a' && ch<= 'z')
               count[str[i]-'a']++;
              else if (ch>= '0' && ch<= '9')
                       ndigit++;
              else if (ch == ' ' || ch =='\n' || ch == '\t')
                    other++;
                       i++;
                       
          }
              /* print counts */
              for (c = 0; c < 26; c++)
   {
      /** Printing only those characters 
          whose count is at least 1 */
 
      if (count[c] != 0)
         printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
   }
              printf(" Digits : %d", ndigit);
              printf("Other chars : %d\n", other);
             
} 
