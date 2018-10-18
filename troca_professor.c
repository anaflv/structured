/*

Faça um programa que leia uma frase e troque
“prof” por “professor”. O termo “prof” pode
aparecer no máximo uma vez na frase;

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int troca_p(char v[]) {
	int i = 0, qtd = 0, flg = 0;
	
	while (v[i] != '\0') {
		flg = (v[i]==' ' || v[i]=='\t' || v[i]=='\n') ? 0 : flg + 1;
		if (flg == 1) qtd++;
		i++;
	}
	return qtd;
}



int main() {

	char texto[101];
	fgets(texto, 101, stdin);
	
	//int qtd = conta_palavras_b(texto);
	
	printf("%s", texto);

	return 0;
}
