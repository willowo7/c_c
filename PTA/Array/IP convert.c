#include<stdio.h>
#include<math.h>
int main(){
    int i,j;
    char a[32];
    int b[4][8],c[4]={0};//c数组初始化为0
    scanf("%s",a);
    for(i=0;i<4;i++){
        for(j=0;j<8;j++){
            b[i][j]=a[8*i+j]-'0';
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<8;j++){
            c[i]+=pow(2,7-j)*b[i][j];//二进制转十进制
        }
    }
    for(i=0;i<4;i++){
        if(i==0)printf("%d",c[i]);
        else printf(".%d",c[i]);
    }
    return 0;
}