#include <stdio.h>

double soma(double x,double y){

	return x+y;
}

double sub(double x,double y){

	return x-y;
}

double mul(double x,double y){

	return x*y;
}

double div (double x,double y){
	if(y!=0) return x/y;
	else return -1;
}

int main(){
	int x,y,opt;
	printf("Digite um numero x e um numero y:");
	scanf("%d %d",&x,&y);
	printf("Digite uma operacao: \n 1- soma\n 2- sub\n 3- mul\n 4- div\n");
	scanf("%d",&opt);
	
	switch (opt){
	case 1: printf("%lf", soma(x,y)); break;
	case 2: printf("%lf", sub(x,y)); break;
	case 3: printf("%lf", mul(x,y)); break;
	case 4: printf("%lf", div(x,y)); break;
	return 0;
	}
}
