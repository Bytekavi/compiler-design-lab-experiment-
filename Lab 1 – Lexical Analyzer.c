#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    char str[100],keywords[][10]={"int","float","if","else","while","return"};
    int i=0,j,k,flag;
    printf("Enter code: ");
    scanf("%s",str);
    while(str[i]!='\0'){
        if(isalpha(str[i])){
            char id[20];
            j=0;
            while(isalnum(str[i])){
                id[j++]=str[i++];
            }
            id[j]='\0';
            flag=0;
            for(k=0;k<6;k++){
                if(strcmp(id,keywords[k])==0){
                    flag=1; break;
                }
            }
            if(flag) printf("Keyword: %s\n",id);
            else printf("Identifier: %s\n",id);
        }
        else if(isdigit(str[i])){
            printf("Number: %c\n",str[i]);
            i++;
        }
        else{
            printf("Operator: %c\n",str[i]);
            i++;
        }
    }
}
