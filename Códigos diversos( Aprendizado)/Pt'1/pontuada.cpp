#include <stdio.h>
 int main (){
 	
 	int i, v1[5], v2[5], vr[5];
 	
 	for (i=0;i<5;i++){
	 printf ("digite um numero: ");
 	scanf ("%d", &v1[i]);
 	
 	}for (i=0;i<5;i++){
 		printf ("digite um segundo numero: ");
 		scanf ("%d", &v2[i]);
 		
 		
	 }for (i=0;i<5;i++){
	 	vr[i] = v1[i] + v2[i];
	 	
	 	
	 }for (i=0;i<5;i++){
	 	printf ("resultado: %d", vr[i]);
	 }
 }
