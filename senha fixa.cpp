#include <stdio.h>
 
int main() {
	
	int n;
	
	while(scanf("%d", &n) )
	if(n == 2022){
		printf("Acesso Permitido\n");
	} else {
		printf("Acesso Invalido\n");
	}
	return 0;
}
