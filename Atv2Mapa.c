#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define LINHA 4
#define COLUNA 6

float informavendas(float matriz[LINHA][COLUNA]);
float imprimevendas(float matriz[LINHA][COLUNA]);
float mediavendas(float matriz[LINHA][COLUNA]);
float matriz[LINHA][COLUNA];
float somavendas;
int i,j,k,opcao,condicao;

int main(){
    setlocale(LC_ALL,"");
    condicao=0;
    do{
        system("cls");
        printf("\n####- PROGRAMA DE VENDAS - REVENDA AUTOMÓVEIS -####");
        printf("\n");
        printf("\n[1]Preencher Vendas:");
        printf("\n[2]Exibir as Vendas:");
        printf("\n[3]Média de Vendas:");
        printf("\n[4]Sair do programa");
        printf("\n");
        printf("\nEscolha uma opção do Menu:");
        scanf("\n%d",&opcao);
        if ((opcao==2 && condicao==0)||(opcao==3 && condicao==0)){
        	printf("\nPara exibir as vendas do mês ou a média é necessário preencher as vendas!!!\n");
        	printf("\nEscolha a opção [1] Preencher Vendas.");
        	printf("\n");
        	system("pause");
		}else{
        	switch (opcao){
            	case 1 :
            		condicao=1;
                	informavendas(matriz);
            	break;
            	case 2 :
            		condicao=1;
                	imprimevendas(matriz);
            	break;
            	case 3 :
            		condicao=1;
            		system("cls");
            		printf("\n####-Média de Vendas do Mês-####\n");
                	printf("\nMédia de Vendas = R$ %.2f\n",mediavendas(matriz));
                	printf("\n");
                	system("pause");
            	break;
            	case 4 :
                	printf("\nSaindo do Programa...\n");
            		break;
            	default :
                	printf("\nOpção Inválida!!!\n");
                	system("pause");
        	}
		}
    }while(opcao != 4);
    return 0;
}
float informavendas(float matriz[LINHA][COLUNA]){
    for (i=0;i<LINHA;i++){
    	system("cls");
        printf("\n####-Preencher Vendas-####\n");
        printf("\n[%dª] semana: \n",i+1);
        for (j=0;j<COLUNA;j++){
            printf("Informe a venda do [%dº] dia: R$ ",j+1);
            scanf("%f",&matriz[i][j]);
        }
    }
}

float imprimevendas(float matriz[LINHA][COLUNA]){
	system("cls");
    printf("\n####-Relatório de Vendas do Mês-####\n");
    for (i=0;i<LINHA;i++){
        printf("\n[%dª] Semana: \n",i+1);
        for (j=0;j<COLUNA;j++){
            printf("\n [%dº] Dia - Venda = R$ %.2f   ",j+1,matriz[i][j]);
        }
        printf("\n");
    }system("pause");
}

float mediavendas (float matriz[LINHA][COLUNA]){
    float media;
    somavendas=0;
    k=0;
    for (i=0;i<LINHA;i++){
        for (j=0;j<COLUNA;j++){
            somavendas=somavendas+matriz[i][j];
            k++;
        }
    }
    media=somavendas/k;
    return media;
}





