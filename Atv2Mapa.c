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
        printf("\n####- PROGRAMA DE VENDAS - REVENDA AUTOM�VEIS -####");
        printf("\n");
        printf("\n[1]Preencher Vendas:");
        printf("\n[2]Exibir as Vendas:");
        printf("\n[3]M�dia de Vendas:");
        printf("\n[4]Sair do programa");
        printf("\n");
        printf("\nEscolha uma op��o do Menu:");
        scanf("\n%d",&opcao);
        if ((opcao==2 && condicao==0)||(opcao==3 && condicao==0)){
        	printf("\nPara exibir as vendas do m�s ou a m�dia � necess�rio preencher as vendas!!!\n");
        	printf("\nEscolha a op��o [1] Preencher Vendas.");
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
            		printf("\n####-M�dia de Vendas do M�s-####\n");
                	printf("\nM�dia de Vendas = R$ %.2f\n",mediavendas(matriz));
                	printf("\n");
                	system("pause");
            	break;
            	case 4 :
                	printf("\nSaindo do Programa...\n");
            		break;
            	default :
                	printf("\nOp��o Inv�lida!!!\n");
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
        printf("\n[%d�] semana: \n",i+1);
        for (j=0;j<COLUNA;j++){
            printf("Informe a venda do [%d�] dia: R$ ",j+1);
            scanf("%f",&matriz[i][j]);
        }
    }
}

float imprimevendas(float matriz[LINHA][COLUNA]){
	system("cls");
    printf("\n####-Relat�rio de Vendas do M�s-####\n");
    for (i=0;i<LINHA;i++){
        printf("\n[%d�] Semana: \n",i+1);
        for (j=0;j<COLUNA;j++){
            printf("\n [%d�] Dia - Venda = R$ %.2f   ",j+1,matriz[i][j]);
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





