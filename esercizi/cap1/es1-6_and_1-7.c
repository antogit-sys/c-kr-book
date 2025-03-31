#include <stdio.h>
#define EXIT '\n'
int main(void)
{
    int ch;
    int check;

    do{
        check = ((ch=getchar()) != EOF); //(1)
        putchar(ch);
        printf("\t%d\n", check);

    }while(check && ch!=EXIT); //ESCO CON INVIO
    
    printf("EOF VALUE: %d\n",EOF);

return 0;
}

/*conclusioni
 +-----------
 *  ^ l' espressione (1) stampa 1 se è diverso da EOF (End Of File)
 *  ^ EOF = -1
 *
 **/
