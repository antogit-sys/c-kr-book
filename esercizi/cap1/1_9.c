 /*Cap 1 es 1.9 pag 16
 *
 * si scriva un programma i cui dati in uscita replichino i dati in ingresso,
 * sostituendo però una stringa di uno o piu spazi con un singolo spazio
 *
 */
#include <stdio.h>
#include <ctype.h>  
#define SPACE ' '

/*soluzione 1
int main(void)
{
    int ch;
    int cs = 0; //counter space

    while((ch=getchar())!=EOF){
        
        if(ch != SPACE){
            putchar(ch);
            cs = 0;
        }else if(ch == SPACE){
            cs++;
            if(cs == 1)
                putchar(SPACE);
        }
        
    }


return 0;
}*/

/*soluzione 2*/
#include <stdio.h>
int main()
{
    int c, lastchar;
    
    lastchar = 0;
    c = 0;
    while ((c = getchar()) != EOF){
        if (c == SPACE && lastchar == SPACE)
            ;
        else
            putchar(c); 

        lastchar = c;
    }

return 0;
}
