#include "stdio.h"

void free_consistent(char *p, int flag){
	if (flag==17) {
		p=NULL; 
		return;
		}
 if (flag == 34) { 
	return;}
 free(p);
 }
 void mlk_might(int i){
		int *ptr1;
		ptr1 = malloc(5);
		if (i)
			ptr1=0;
		free (ptr1);
		
}
void mlk_must(int j){
	int *ptr;
	ptr = malloc(10);
	mlk_might(1);
	free_consistent("Pavan",17);
}

