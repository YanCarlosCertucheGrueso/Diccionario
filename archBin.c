#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//dicctxt2bin.c NOmbre archivo

struct Dict{
	char palIng[50];
	char palEsp[50];
};
typedef struct Dict TipoDict;

void convertirTxtABin(char* nombretxt, char* nombin){
	FILE *mnjtxt, *mnjbin;
	char linea[200],*palIng, *palEsp;
	TipoDict tmp;
	mnjtxt= fopen("nombretxt","r");
	mnjbin= fopen("nombin","wb");
	while(fgets(linea,200,mnjtxt) != NULL);
		palIng=strtok(linea,":");
		palEsp=strtok(NULL,"\n");
		if( strlen(palIng)<50 && strlen(palEsp)<50){
			strcpy(tmp.palIng,palIng);
			strcpy(tmp.palEsp,palEsp);clear
			fwrite(&tmp,sizeof(TipoDict),1,mnjbin);
		}
	}

	fclose(mnjtxt);
	fclose(mnjbin);	
}

void ImprimirBIn(char *nombreBin){
	FILE *mnjbin=fopen(nombreBin,"rb");
	TipoDict *tmp=(TipoDict)malloc(sizeof(TipoDict));
	while(fread(tmp,sizeof(*tmp),1,mnjbin)) == 1){
		printf("<%s> ss<%s>\n",tmp->palIng, tmp->palEsp);
	}
	fclose(mnjbin);
}
int main(){
	convertirTxtABin("palabras.txt","palabras.bin");
	ImprimirBIn("palabras.bin");
	return 0; 
}
