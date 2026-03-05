#include <stdio.h>

int max(int Liste[], int size){
    int maxv=-1;
    for(int i=0; i < size; i++){
        if(Liste[i]>maxv){
            maxv = Liste[i];
        }
    }
    return maxv;
}



void main(void){

    int Liste[] = {2, 3, 4, 4, 66, 65, 3575, 6637, 737375};
    int size = sizeof(Liste)/sizeof(Liste[0]);
    int c = max(Liste, size);
    printf("%i", c);
    
}