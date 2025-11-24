#include <stdio.h>
#include <string.h>
int main(){
    char *a[5];  // 改为指针数组
    char temp[80];
    for(int i=0;i<5;i++){
        scanf("%s",temp);
        a[i] = strdup(temp);  // 复制字符串
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<4-i;j++){
            if(strcmp(a[j],a[j+1])>0){
                char *temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("After sorted:\n");
    for(int i=0;i<5;i++){
        printf("%s\n",a[i]);
        free(a[i]);  // 释放内存
    }
    return 0;
}