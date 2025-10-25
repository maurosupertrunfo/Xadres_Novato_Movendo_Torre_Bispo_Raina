#include <stdio.h>
int main(){
    char s;
    do{
        printf("Mover com ?\n T para mover a Torre\n, B para mover Bispo \nR para mover a rainha.\n Outra letra para *sair*.\n");
        scanf(" %c", &s);
        if(s=='T'){
            printf("*Torre*\n");
            printf("r direita, l esquerda c cima e b baixo\n");
            char c;
            scanf(" %c",&c);
            // a questao
            while( !(c!='r' && c!='l' && c!='c' && c!='b')){

                if(c=='r'){
                    for(int i=0; i<5; i++){
                        printf("Direita\n");
                        c='q';
                    }
                }
                if(c=='l'){
                    for(int i=0; i<5; i++){
                        printf("L\n");
                        c='q';
                    }
                }
                if(c=='c'){
                    for(int i=0; i<5; i++){
                        printf("cima\n");
                        c='q';
                        }
                    }
                if(c=='b'){
                    for(int i=0; i<5; i++){
                        printf("baixo\n");
                        c='q';
                    }
                }
            }
        }

        if(s=='B'){
            printf("*Bispo*\n");

        }

        if(s=='R'){
            printf("*Rainha*\n");

        }
    }

    while(!(s!= 'T' && s!='B' && s!='R'));


    return 0;
}
