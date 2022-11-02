#include <stdio.h>
#include <string.h>
int main(){
	int number,len,a,b,i,j;
	char Alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%d",&number);
    len=number*2-1;
    int tab[len][len];
    int d=0,f=len;
    for(i=0;i<number;i++){
    for(j=d;j<f;j++){
        tab[i][j]=i;
       
    }
    for(a=0;a<len;a++){
    	 tab[i+1][a]=tab[i][a];
    }
    d++;
    f--;
    }
    for(i=0;i<number;i++){
    	for(j=0;j<len;j++){
    		printf("%c",Alphabet[tab[i][j]]);
    	}
    	printf("\n");
    }
    for(i=number-2;i>=0;i--){
    	for(j=0;j<len;j++){
    		printf("%c",Alphabet[tab[i][j]]);
    	}
    	printf("\n");
    }
return 0;
}