#include <stdio.h>
#include<string.h>
int main() {
    char str[100],str1[100];
    int k=0,cond=0;

    printf("enter the string : ");
    fgets(str,100,stdin);
    str1[0]=str[0];
    k++;
    for(int i=1;i<sizeof(str);i++){
        for(int j=0;j<i;j++){
            if(str[i]==str[j]){
                cond=0;
                break;

            }
            else{
                cond=1;
            }
        }
        if(cond==1){
        str1[k]=str[i];
        k++;
        }
    }
    printf("%s",str1);
    return 0;
}