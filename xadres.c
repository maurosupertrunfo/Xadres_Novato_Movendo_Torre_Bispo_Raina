/*
    1.
Nível Novato
Desafio: nível novato
Movimentando as Peças do xadrez


Este desafio foca na movimentação das peças de xadrez usando estruturas de repetição em C. Você aplicará o que aprendeu sobre for, while e do-while para simular movimentos no tabuleiro.


O que você vai fazer


Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha. Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento. O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.

 

Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

Requisitos funcionais


Entrada de Dados: Os valores para o número de casas a serem movidas serão definidos diretamente no código através de variáveis ou constantes.
 
Lógica de Movimentação: Cada programa deverá implementar a lógica de movimento específica de cada peça (Torre, Bispo, Rainha).
 
Saída de Dados: O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça. Para movimentos na diagonal (Bispo), imprimir a combinação de duas direções. Utilize o comando printf para exibir as informações. As saídas devem seguir o padrão: printf("Cima\n");, printf("Baixo\n");, printf("Esquerda\n");, printf("Direita\n");, printf("Cima Esquerda\n"); printf("Direita\n");

*/


#include <stdio.h>
int main(){
    char s; //varia s eh usada para escolher a peca do xadres a ser movida
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
                //aqui != eh nao, o operador inversor, primeiro nao r, l, c, b, e entao eu enverto novamente para selecionar todas as tecla, a nao ser as necessarias.
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
            while( !(r!='r' && r!='l' && r!='c' && r!='b'  &&  r!='m' && r!='n' && r!='p' && r!='q' )){
                //aqui != eh nao, o operador inversor, primeiro nao r, l, c, b, e entao eu enverto novamente para selecionar todas as tecla, a nao ser as necessarias.
                if(r=='r'){
                    for(int i=0; i<5; i++){
                        printf("Direita\n");
                        r='x';
                    }
                }
                if(r=='l'){
                    for(int i=0; i<5; i++){
                        printf("L\n");
                        r='x';
                    }
                }
                if(r=='c'){
                    for(int i=0; i<5; i++){
                        printf("cima\n");
                        r='x';
                        }
                    }
                if(r=='b'){
                    for(int i=0; i<5; i++){
                        printf("baixo\n");
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
