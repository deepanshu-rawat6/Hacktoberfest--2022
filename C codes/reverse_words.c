//Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse_words(const char *str){
    int i,j,k;
    char *str1 = (char *)malloc(sizeof(char)*strlen(str));
    for(i=0;i<strlen(str);i++){
        if(str[i] == ' '){
            str1[i] = ' ';
        }
        else{
            for(j=i;str[j]!=' ' && j<strlen(str);j++);
            for(k=j-1;k>=i;k--){
                str1[i] = str[k];
                i++;
            }
            i--;
        }
    }
    return str1;
}

int main(){
    char str[100];
    printf("Enter the string: ");
    gets(str);
    printf("The reversed string is: %s",reverse_words(str));
    return 0;
}
