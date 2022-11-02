#include <stdio.h>
#include <string.h>


int Lenght_Of_Code(int tab[]);
void removeElement(int tab[],int lenTab,int IndexToRemove);
/*---------------------------------------------------*/
int main(){
	char notes[]="abcdefg";
    char morceau[500];
    int morceauInt[500]={0},i,j;
    scanf("%s",&morceau);
    for(i=0;i<500;i++){
    	if(morceau[i]=='\0'){break;};
    	for(j=0;j<7;j++){
    		if(morceau[i]==notes[j]){
    			morceauInt[i]=j+1;
    		}
    	}

    }
   
    int len=Lenght_Of_Code(morceauInt);
    for(i=len-1;i>0;i--){
    if(morceauInt[i]==morceauInt[i-1]){
    	removeElement(morceauInt,Lenght_Of_Code(morceauInt),i);
    	removeElement(morceauInt,Lenght_Of_Code(morceauInt),i-1);       
    }
    }
    for(i=0;i<Lenght_Of_Code(morceauInt);i++){
    	printf("%c",notes[morceauInt[i]-1]);
    }
	return 0;
}
/*--------------------------------------------------*/
void removeElement(int tab[],int lenTab,int IndexToRemove){
int i;
*(tab+IndexToRemove)=0;
for(i=IndexToRemove;i<lenTab;i++){
tab[i]=tab[i+1];
}
}

/*-----------------------------------------*/
int Lenght_Of_Code(int tab[]){
    int l;
	for(l=0;l<500;l++){
		if(*(tab+l)==0){break;};
	}
	return l;
}