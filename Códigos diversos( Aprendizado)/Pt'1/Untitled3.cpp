#include <stdio.h>
int main()
{
    int x,y, a=0,b=1,c=0;
    
	scanf("%d", &x);
    
	
	if(0 <= x <= 46 ){
	
	for(y=1; y<x; y++)
    {
        if(y%2==1)
        {
            printf("%d ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d ",c);
        else if(y%2==0)
        {
            printf("%d ",c);
            c=a+b;
            b=c;
        }
    } else{
    	if(num > 46){
		
    	
    	printf(n�o aceitavel);}
    
    printf("%d\n",c);
   
}}
