#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void encrypt_transposition(char inp[], int N)

{   
    int idx = 0;        // current index of output string
    char out[50];       // output array


    for(int i = 0; i < N; i = i + 3)
    {
        out[idx] = inp[i];
        idx++;
    }


    for(int i = 1; i < N; i = i + 3)
    {
        out[idx] = inp[i];
        idx++;
    }


    for(int i = 2; i < N; i = i + 3)
    {
        out[idx] = inp[i];
        idx++;
    }


    out[idx++] = '\0';


    printf("Encrypted string : %s", out);
}

void main()

{
    char input[50] = "srivaths";
    int len = strlen(input);

    encrypt_transposition(input, len);
}
