/*Cap 1 es 1.8 pag 16
 *
 * si scriva un programma per contare gli spazi bianchi, 
 * i caratteri di tabulazione e i caratteri new line
 *
 */
#include <stdio.h>
#define NEW_LINE '\n'
#define NEW_TAB '\t'
#define NEW_SPACE ' '

int main(void)
{
    int ch;

    long nl=0,ns=0,nt=0; //new_line, new_space, new_tab

    while((ch=getchar())!=EOF){
        switch(ch){
            case NEW_LINE:  nl++; break;
            case NEW_TAB:   nt++; break;
            case NEW_SPACE: ns++; break;
        }
    }

    // print data
    printf("number of new line: %ld\n",nl);
    printf("number of tab: %ld\n",nt);
    printf("number of space: %ld\n",ns);
    


}
