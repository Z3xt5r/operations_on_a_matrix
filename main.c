#include<stdio.h>
void main(){
    int a[10][10],b[10][10],m[100][100];
    int i,j,n,t,n1,n2,n3,c,d,k,sum=0;
    printf("Enter the size of the first matrix's rows : ");
    scanf("%d",&n);
    printf("Enter the size of the first matrix's column : ");
    scanf("%d",&n1);
    printf("\nEnter the elements of the first matrix (%dx%d) : ",n,n1);
    for(i=0;i<n;i++){
        printf("\nEnter the elements of %d row : ",i);
        for(j=0;j<n1;j++){
            scanf("%d",&a[i][j]);}}
    printf("Enter the size of the second matrix's rows : ");
    scanf("%d",&n2);
    printf("Enter the size of the second matrix's column : ");
    scanf("%d",&n3);
    printf("\nEnter the elements of the second matrix (%dx%d) : ",n,n1);
    for(i=0;i<n2;i++){
        printf("\nEnter the elements of %d row : ",i);
        for(j=0;j<n3;j++){
            scanf("%d",&b[i][j]);}}


    if(!(n==n2 &&n1==n3))
        printf("\nAddition and subtraction of matrix not possible !! ");
    else {
        printf("\nAddition : \n");
        for(i=0;i<n;i++){
            for(j=0;j<n1;j++){
                c=a[i][j]+b[i][j];
                printf("%d ",(c));}
            printf("\n");}
        printf("\n Subtraction : \n");
        for(i=0;i<n;i++){
            for(j=0;j<n1;j++){
                c=a[i][j]-b[i][j];
                printf("%d ",(c));}
            printf("\n");}
    }




    if(!(n==n3 && n1==n2))
        printf("\nMultiplication not possible !! \n                                                                                                                                                                                                                                                                                                             ");
    else{
        for (c = 0; c < n; c++) {
            for (d = 0; d < n2; d++) {
                for (k = 0; k < n3; k++) {
                    sum = sum + a[c][k]*b[k][d];
                }

                m[c][d] = sum;
                sum = 0;
            }
        }}

    printf("\n\nMatrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n3;j++){
            printf("%d ",m[i][j]);}
        printf("\n");}
}





