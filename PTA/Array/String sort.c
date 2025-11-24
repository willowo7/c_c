#include<stdio.h>
#include <string.h>
int main(){
    int i,j;
    char temp[80];
    char a[5][80];
    for(i=0;i<5;i++){
        scanf("%s",a[i]);//a[i]已经是指针，不要再加&
    }
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++){
            if(strcmp(a[j],a[j+1])>0){//不要直接比较a[j]和a[j+1]
                strcpy(temp,a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],temp);//同理，不要直接=，没用的
            }
        }
    }
    printf("After sorted:\n");
    for(i=0;i<5;i++){
        printf("%s\n",a[i]);
    }
    return 0;
}