#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	FILE  *dict;
	char cadena[24000];//la variable que me va almacenar la linea que se va leyendo.
	char *palabra, *s1,*s2,*linea,*esp,*esp1;
	int origen; 
	palabra= argv[1];
	origen =atoi(argv[2]);
	dict=fopen("BaseDic.txt","r");//abro el archivo

	if(dict == NULL){
		exit(0);
	}else{
		if (origen == 1){
			while(!feof(dict)){
				fgets(cadena,200,dict);
				s1=strtok(cadena ," :");
				esp=strtok(NULL," ");
				//esp1=strtok(NULL,"(to -) ");
				s2=strtok(NULL,"\n");
				if ((strcmp(palabra,s2)) == 0){
					printf(" %s\n ", s1);
				}
			}
				
		}else{
			while(!feof(dict)){
				fgets(cadena,200,dict);
				s1=strtok(cadena ," :");
				esp=strtok(NULL," ");
				//esp1=strtok(NULL,"(to -) ");
				s2=strtok(NULL,"\n");
				if ((strcmp(palabra,s1)) == 0){
					printf(" %s\n ", s2);
				}
			}
		}
	}
		fclose(dict);
}
