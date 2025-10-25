#include <stdio.h>
int main(){
    printf("\nBem-vindo ao simulador **Xadres_Novato_Movendo_Torre_Bispo_Raina**\n");
    char s; //varia s eh usada para escolher a peca do xadres a ser movida
    do{
        printf("\nVocê vai mover qual peça?\n T para mover a Torre,\n B     ***      Bispo, \n R     ***      Rainha.\n Outra letra para *sair*.\n");
        scanf(" %c", &s);
        if(s=='T'){
            printf("*Torre*\n");
            printf("d direita, e esquerda c cima e b baixo\n");
            char c;
            scanf(" %c",&c);
            // a questao
            while( !(c!='d' && c!='e' && c!='c' && c!='b')){
                //aqui != eh nao, o operador inversor, primeiro nao d, e, c, b, e entao eu enverto novamente para selecionar todas as tecla, a nao ser as necessarias.
                if(c=='d'){
                    for(int i=0; i<5; i++){
                        printf("Direita\n");
                        c='x';
                    }
                }
                if(c=='e'){
                    for(int i=0; i<5; i++){
                        printf("Esquerda\n");
                        c='x';
                    }
                }
                if(c=='c'){
                    for(int i=0; i<5; i++){
                        printf("Cima\n");
                        c='x';
                        }
                    }
                if(c=='b'){
                    for(int i=0; i<5; i++){
                        printf("Baixo\n");
                        c='x';
                    }
                }
            }
        }
        //Aqui temos, se s igual a B, o conteudo do if eh executado
        //-------------------------------------------------------------------------------------
        if(s=='B'){
            printf("*Bispo*\n");
            printf("--------------\n");
            printf("m para Cima Direita\n");
            printf("n para Cima Esquerda\n");
            printf("p para Baixo Direita\n");
            printf("q para Baixo Esquerda\n");
            char b;
            scanf(" %c",&b);
            // a questao
            while( !(b!='m' && b!='n' && b!='p' && b!='q')){
                //aqui != eh nao, o operador inversor, primeiro nao r, l, c, b, e entao eu enverto novamente para selecionar todas as tecla, a nao ser as necessarias.
                if(b=='m'){
                    for(int i=0; i<5; i++){
                        printf("DireitaCima\n");
                        b='x';
                    }
                }
                if(b=='n'){
                    for(int i=0; i<5; i++){
                        printf("DireitaBaixo\n");
                        b='x';
                    }
                }
                if(b=='p'){
                    for(int i=0; i<5; i++){
                        printf("EsquerdaBaixo\n");
                        b='x';
                        }
                    }
                if(b=='q'){
                    for(int i=0; i<5; i++){
                        printf("EsquerdaCima\n");
                        b='x';
                    }
                }
            }
        }

        //-------------------------------------------------------------------------------------
        if(s=='R'){
            printf("*Rainha*\n");
            printf("r direita, l esquerda c cima e b baixo\n");
            printf("m para Cima Direita\n");
            printf("n para Cima Esquerda\n");
            printf("p para Baixo Direita\n");
            printf("q para Baixo Esquerda\n");

            char r;
            scanf(" %c",&r);
            // a questao
            while( !(r!='d' && r!='e' && r!='c' && r!='b'  &&  r!='m' && r!='n' && r!='p' && r!='q' )){
                //aqui != eh nao, o operador inversor, primeiro nao r, l, c, b, e entao eu enverto novamente para selecionar todas as tecla, a nao ser as necessarias.
                if(r=='d'){
                    for(int i=0; i<5; i++){
                        printf("Direita\n");
                        r='x';
                    }
                }
                if(r=='e'){
                    for(int i=0; i<5; i++){
                        printf("Esquerda\n");
                        r='x';
                    }
                }
                if(r=='c'){
                    for(int i=0; i<5; i++){
                        printf("Cima\n");
                        r='x';
                        }
                    }
                if(r=='b'){
                    for(int i=0; i<5; i++){
                        printf("Baixo\n");
                        r='x';
                    }
                }

                //
                if(r=='m'){
                    for(int i=0; i<5; i++){
                        printf("DireitaCima\n");
                        r='x';
                    }
                }
                if(r=='n'){
                    for(int i=0; i<5; i++){
                        printf("DireitaBaixo\n");
                        r='x';
                    }
                }
                if(r=='p'){
                    for(int i=0; i<5; i++){
                        printf("EsquerdaBaixo\n");
                        r='x';
                        }
                    }
                if(r=='q'){
                    for(int i=0; i<5; i++){
                        printf("EsquerdaCima\n");
                        r='x';
                    }
                }
            }
        }
    }

    while(!(s!= 'T' && s!='B' && s!='R')); // se nao T, se nao B, se nao R, executa, ou seja, se nao sao as teclas citadas, aceita qualquer outra e executa o codigo entre as chaves. Novamente, investidindo. executa se for as teclas cidadas

    return 0;
}
