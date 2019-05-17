#include<stdio.h> 

int main() { 

    int x, y, z, w; //x,y,z,w 는 행렬의 크기 

    do{ 

        printf("첫번째 행렬의 크기 :"); 

        scanf("%d %d", &x,&y); 

        printf("두번째 행렬의 크기 :"); 

        scanf("%d %d", &z,&w); 

        if(y!=z)
            printf("Error : input other number\n"); //행렬 a의 열(y)과 b의 행(z)이 다를 때는 error가 출력되기위한 if문   

        if(x<0) return 0;   // 첫번째 행렬의 행이 음수면 실행되지 않음   

    } while(y!=z);  // y와 z가 다르면 다시 입력받기 위한 while문   

    int a[x][y], b[z][w], i,j; 

    printf("input array a:\n");
    for(i=0;i<x;i++) {  //행렬 a를 입력   

        for(j=0;j<y;j++) 

            scanf("%d", &a[i][j]); 

    } 

    printf("input array b:\n");
    for(i=0;i<z;i++) {  //행렬 b를 입력   

        for(j=0;j<w;j++) { 

            scanf("%d", &b[i][j]); 

        } 

    } 

    printf("array a:\n");
    for(i=0;i<x;i++){ 

        for(j=0;j<y;j++){ 

            printf("%d", a[i][j]); 

        } 

        printf("\n"); 

    } 

    printf("array b:\n");
    for(i=0;i<z;i++) { 

        for(j=0;j<w;j++) { 

            printf("%d", b[i][j]); 

        } 

        printf("\n"); 

    } 

    int c[x][w],m;

    for (i = 0; i < x; i++) {
        for (j = 0; j < w; j++)
            c[i][j] = 0;
    }

    printf("array c:\n");
    for(i=0;i<x;i++) {  //곱셈결과 행렬c를 나타내는 for문   

        for(j=0;j<w;j++) { 

            for(m=0;m<y;m++) {

                c[i][j] += a[i][m]*b[m][j]; // 행렬의 곱셈과정   

            }

            printf("%d ", c[i][j]); 

        } 

        printf("\n"); 

    } 

    return 0;  

}