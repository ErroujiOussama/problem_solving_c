
#include <stdio.h>
#include <stdlib.h>
void main(){
    int nbjours,nblivres,i,j,k,nbclients;
    int Livreindex,delai;
    scanf("\n%d %d",&nblivres,&nbjours);
    int liste[nblivres];
    for(i=0;i<nblivres;i++){
     liste[i]=0;
    }
    for(i=0;i<nbjours;i++){
     scanf("\n%d",&nbclients);
     for(j=0;j<nbclients;j++){
     scanf("%d %d",&Livreindex,&delai);
     if(liste[Livreindex]==0){
        liste[Livreindex]=-delai;
        system("color a");
        printf("%d\n",1);
        system("color 7");
     }
     else{
        system("color a");
        printf("%d\n",0);
        system("color 7")
     }
     }
      for(k=0;k<nblivres;k++){
          if(liste[k]<0){
          liste[k]=liste[k]+1;
     }
 }
    }
}