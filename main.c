//Bruno Portilla Hinojosa
//ITESM
#include <stdio.h>

int main() {
    int words = 0;
    int i = 0; //asigno variables
    char phr[200];

    printf("In this program you can enter any phrase and i will tell you how many words it has.\nEnter a phrase:\n");
    gets(phr);  //pido la frase

    for(i = 0; i< strlen(phr); i++){
        if(phr[i] != ' ' && phr[i] != '\t'){    //cuento espacios  para ver cuantas palabras hay
            words++;
            while(phr[i] != ' ' && phr[i] != '\t')
                i++;
        }
    }

    printf("your phrase has %d words.", words); //muestro el numero de palabras



    return 0;
}