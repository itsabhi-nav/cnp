

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void decrypt_transposition(char inp[], int N)

{   
    int idx = 0;        
    char out[50];       

    int rail_1_size = (N + 2) / 3; 
    int rail_2_size = (N + 1) / 3; 
    int rail_3_size = N / 3;       

    
    for(int i = 0; i < rail_1_size; i++) {
        out[i * 3] = inp[idx++];
    }


    for(int i = 0; i < rail_2_size; i++) {
        out[i * 3 + 1] = inp[idx++];
    }


    for(int i = 0; i < rail_3_size; i++) {
        out[i * 3 + 2] = inp[idx++];
    }


    out[N] = '\0';


    printf("Decrypted string : %s\n", out);
}

void main()

{
    char input[50] = "Hehgdnrhtei eo d erdt luet e";
    int len = strlen(input);

    decrypt_transposition(input, len);
}
