#include <stdio.h>
#include <string.h>

// Cria o movimento da Torre
void movimentoTorreBispoRainha(int casas_movidas , char direcao[50], char peca[50]){
    if(casas_movidas > 0){
        printf("%s se moveu para %s\n", direcao);
        movimentoTorreBispoRainha(casas_movidas - 1, direcao, peca);
    }
}
int main(){

    //VARIÁVEIS

    int movimento_bispo, movimento_rainha, movimento_torre, movimento_cavalo1, movimento_cavalo2, escolha_pecas, escolha_movimento_torre, escolha_movimento_bispo, escolha_movimento_rainha, movimento_cavalo_horizontal, movimento_cavalo_vertical;
    char direcao[50], peca[50];

    printf("\n===== Bem vindo ao XADREZ EM C =====\n");
     
    // Loop principal
    do
    {
        printf("\n===== Escolha uma das opções =====\n");
        printf("1: Torre\n");
        printf("2: Bispo\n");
        printf("3: Rainha\n");
        printf("4: Cavalo\n");
        printf("5: Sair\n");
        scanf("%d", &escolha_pecas);

        // Escolha das peças
        switch (escolha_pecas)
        {
        case 1:

        // Indica qual peça é
        strcpy(peca, "A torre");
            do
            {
                printf("\n===== Escolha para qual direção a Torre vai se mover =====\n");
                printf("1: Cima\n");
                printf("2: Baixo\n");
                printf("3: Direita\n");
                printf("4: Esquerda\n");
                scanf("%d", &escolha_movimento_torre);

                // Verifica se a escolha faz parte das opções                
                if (escolha_movimento_torre < 1 || escolha_movimento_torre > 4)
                {
                    printf("Opção inválida!");
                }
                
 
            } while (escolha_movimento_torre < 1 || escolha_movimento_torre > 4);

            // Verifica qual foi a escolha e atribui a direção
            if (escolha_movimento_torre == 1)
            {
                strcpy(direcao, "cima");
            }else if (escolha_movimento_torre == 2)
            {
                strcpy(direcao, "baixo");
            }else if (escolha_movimento_torre == 3)
            {
                strcpy(direcao, "direita");
            }
            else if (escolha_movimento_torre == 4)
            {
                strcpy(direcao, "esquerda");
            }

            printf("\n===== Digite o número de casas que a Torre irá se mover =====\n");
            scanf("%d", &movimento_torre);

            movimentoTorreBispoRainha(movimento_torre, peca, direcao);
            escolha_pecas = 0;
        break;
        case 2:
        // Indica qual peça é
        strcpy(peca, "O bispo");
            do
            {
                printf("\n===== Escolha para qual direção Bispo vai se mover, lembrando que ele se move na diagonal. =====\n");
                printf("1: Cima, Direita\n");
                printf("2: Baixo, Direita\n");
                printf("3: Cima, Esquerda\n");
                printf("4: Baixo, Esquerda\n");
                scanf("%d", &escolha_movimento_bispo);
                
                // Verifica se a escolha faz parte das opções                
                if (escolha_movimento_bispo < 1 || escolha_movimento_bispo > 4)
                {
                    printf("Opção inválida!");
                }

                
            } while (escolha_movimento_bispo < 1 || escolha_movimento_bispo > 4);
            
            // Verifica qual foi a escolha e atribui a direção
            if (escolha_movimento_bispo == 1)
            {
                strcpy(direcao, "cima e para direita");
            }else if (escolha_movimento_bispo == 2)
            {
                strcpy(direcao, "baixo e para direita");
            }else if (escolha_movimento_bispo == 3)
            {
                strcpy(direcao, "cima e para esquerda");
            }
            else if (escolha_movimento_bispo == 4)
            {
                strcpy(direcao, "baixo e para esquerda");
            }

            printf("\n===== Digite o número de casas que o Bispo irá se mover =====\n");
            scanf("%d", &movimento_bispo);

            movimentoTorreBispoRainha(movimento_bispo, peca, direcao);
            escolha_pecas = 0;
        break;
        case 3:
        // Indica qual peça é
        strcpy(peca, "A Rainha");
            do
            {
                printf("\n===== Escolha para qual direção a Rainha vai se mover. =====\n");
                printf("1: Cima\n");
                printf("2: baixo\n");
                printf("3: esquerda\n");
                printf("4: direita\n");
                printf("5: Cima, Direita\n");
                printf("6: Baixo, Direita\n");
                printf("7: Cima, Esquerda\n");
                printf("8: Baixo, Esquerda\n");
                scanf("%d", &escolha_movimento_rainha);

                // Verifica se a escolha faz parte das opções                
                if (escolha_movimento_rainha < 1 || escolha_movimento_rainha > 8)
                {
                    printf("Opção inválida!");
                }

            } while (escolha_movimento_rainha < 1 || escolha_movimento_rainha > 8);
            
            // Verifica qual foi a escolha e atribui a direção
            if (escolha_movimento_rainha == 1)
            {
                strcpy(direcao, "cima");
            }else if (escolha_movimento_rainha == 2)
            {
                strcpy(direcao, "baixo");
            }else if (escolha_movimento_rainha == 3)
            {
                strcpy(direcao, "direita");
            }
            else if (escolha_movimento_rainha == 4)
            {
                strcpy(direcao, "esquerda");
            }else if (escolha_movimento_rainha == 5)
            {
                strcpy(direcao, "cima e para direita");
            }else if (escolha_movimento_rainha == 6)
            {
                strcpy(direcao, "baixo e para direita");
            }else if (escolha_movimento_rainha == 7)
            {
                strcpy(direcao, "cima e para esquerda");
            }
            else if (escolha_movimento_rainha == 8)
            {
                strcpy(direcao, "baixo e para esquerda");
            }

            printf("\n===== Digite o número de casas que a Rainha irá se mover =====\n");
            scanf("%d", &movimento_rainha);

            movimentoTorreBispoRainha(movimento_rainha, peca, direcao);
            escolha_pecas = 0;
        break;
        case 4:
        do
        {
            //Pega o movimento vertical do Cavalo
            printf("\n===== Escolha para qual direção o Cavalo vai se mover. =====\n");
            printf("1: Cima\n");
            printf("2: baixo\n");
            scanf("%d", &movimento_cavalo_vertical);
            
            // validando opções
            if (movimento_cavalo_vertical < 1 || movimento_cavalo_vertical > 2)
            {
                printf("Opção inválida!");
            }else{
                printf("\n===== Quantas casas irá se mover? =====\n");
                scanf("%d", &movimento_cavalo1);

                //Pega o movimento horizontal
                printf("\n===== Escolha mais uma direção para o Cavalo. =====\n");
                printf("1: Direita\n");
                printf("2: Esquerda\n");
                scanf("%d", &movimento_cavalo_horizontal);
                if(movimento_cavalo_horizontal < 1 || movimento_cavalo_horizontal > 2){
                    printf("Opção inválida!");
                }else{
                    printf("\n===== Quantas casas irá se mover? =====\n");
                    scanf("%d", &movimento_cavalo2);
                }
                
            }


        } while ((movimento_cavalo_vertical < 1 || movimento_cavalo_vertical > 2) ||
        (movimento_cavalo_horizontal < 1 || movimento_cavalo_horizontal > 2));
        
        for (int i = 0; i < movimento_cavalo1; i++)
        {
            if (movimento_cavalo_vertical == 1)
            {
                printf("O Cavalo se moveu para cima\n");
            }else
            {
                printf("O Cavalo se moveu para baixo\n");
            }

            if (movimento_cavalo1 == i + 1)
            {
                for (int j = 0; j < movimento_cavalo2; j++)
                {
                    
                    if (movimento_cavalo_horizontal == 1)
                    {
                        printf("O Cavalo se moveu para direita\n");
                    }else
                    {
                        printf("O Cavalo se moveu para esquerda\n");
                    }
                }
            }
        }
        escolha_pecas = 0;
        break;
        case 5:
            printf("\n==========================================================\n");
            printf("\n========================= SAINDO =========================\n");
            printf("\n==========================================================\n");
        break;
        default:
        printf("Escolha uma opção válida!\n");
            break;
        }

    } while (escolha_pecas < 1 || escolha_pecas > 5);

    return 0;
}