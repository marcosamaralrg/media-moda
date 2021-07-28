#include <stdio.h>
#include <stdlib.h>

int N = 0;
int freq, c;
int res = 0;
int temp = 0;
int main(){
    int mortes [] = {3,18,172,2,340,97,2,13,32,0,32,2,34,5,2,3,18,16,32,33,55,43,32,21,2,32,32,4,2,32};
    N = (int)(sizeof(mortes)) / sizeof(mortes[0]);
    printf("Vetor size: %i \n", N);
    for (int i=0;i<N;i++) {
        c=1;
        for(int j=i+1;j<N;j++){
            if (mortes[i] == mortes[j])
            c++; 
            freq = c;
        }
        printf("Numero %i aparece %i vezes\n", mortes[i], freq);
        if(freq > temp){
            temp = freq;
            res = mortes[i];
        }
    }
    printf("Moda eh %i \n", res);
}
