//Primeiro eu declarei as variáveis como inteiro, pois não existe meia semente ou meia cova. Logo após, perguntei ao usuário todas as informações necessárias para calcular o número total de covas a serem abertas, como o total de sementes e o número de sementes por cova. Após isso, fiz as contas de divisão (Total de Sementes de cada flor / Quantidade de sementes de cada flor por cova) e mostrei na tela para o usuário.

#include <stdio.h>

int main()
{
    int semAP, quantSCovaAP, semCA, quantSCovaCA, semPE, quantSCovaPE,covaAP, covaCA, covaPE, totalCovas, sobraAP, sobraCA, sobraPE;
   
    
	printf("Diga quantas sementes de Amor Perfeito contem no pacote:");
    scanf("%d", &semAP);
    printf("\nQuantas sementes de Amor Perfeito devem ser colocadas por cova?:");
    scanf("%d" , &quantSCovaAP);
    printf("\n\nDiga quantas sementes de Camomila contem no pacote:");
    scanf("%d", &semCA);
    printf("\nQuantas sementes de Camomila devem ser colocadas por cova?");
    scanf("%d", &quantSCovaCA);
    printf("\n\nDiga quantas sementes de Petunia contem no pacote:");
    scanf("%d", &semPE);
    printf("\nQuantas sementes de Petûnia devem ser colocadas por cova?:");
    scanf("%d", &quantSCovaPE);
   
    
	covaAP = (semAP/quantSCovaAP);
    covaCA = (semCA/quantSCovaCA);
    covaPE = (semPE/quantSCovaPE);
    totalCovas = (covaAP + covaCA + covaPE);
    
	printf("\n\nA quantidade de covas a ser aberta para as sementes de Amor Perfeito sao [%d] \nA quantidade de covas a ser aberta para as sementes de Camomila sao [%d] \nA quantidade de covas a ser aberta para as sementes de Petunia sao [%d] \nO total de covas a ser aberta sera [%d]", covaAP, covaCA, covaPE, totalCovas);
    
	//Enquanto estava fazendo lembrei que essas contas podem dar resto, então, decidi calcular para mostrar ao usuário quantas sementes irão sobrar para que ele possa guardar para novos plantios no futuro e etc.
	
	sobraAP = (semAP%quantSCovaAP);
	sobraCA = (semCA%quantSCovaCA);
	sobraPE = (semPE%quantSCovaPE);
	
	printf("\n\n\nA quantidade de sementes de Amor Perfeito que ira sobrar sera: %d \n\nA quantidade de sementes de Camomila que ira sobrar sera: %d  \n\nA quantidade de sementes de Petunia que ira sobrar sera: %d", sobraAP, sobraCA, sobraPE); 
    
	return 0;
}