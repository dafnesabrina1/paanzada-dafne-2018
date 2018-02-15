#include<stdio.h>

void A(int size){ 

    int n;
    for(n=1;n<size;n++){
        if(n==1){
            printf("sin(%d%c", n,'-');   
        }
        else{
            printf("sin(%d%c", n,'+');   
        }

    }

    printf("sin(%d",size);

    for(n=1;n<=size;n++){
        printf(")");
    }
}

void S(int size){ 
    int n;
    for(n=1;n<size;n++){
        printf("(");
    }
    for(n=1;n<size;n++){
        A(n);
        printf("+%d)",size-n+1);
    }
    A(size);
    printf("+1\n");
  }

int main(){ 
    int size;
    scanf("%d",&size);
    S(size);
   }