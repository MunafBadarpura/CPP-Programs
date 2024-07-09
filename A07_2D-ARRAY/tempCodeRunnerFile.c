#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter Row Of Matrix1 : ");
    scanf("%d", &m);
    printf("Enter Column Of Matrix1 : ");
    scanf("%d", &n);
    printf("Enter Row Of Matrix2 : ");
    scanf("%d", &p);
    printf("Enter Column Of Matrix2 : ");
    scanf("%d", &q);

    int arr[m][n];
    printf("Enter Matrix 1: \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int brr[p][q];
    printf("Enter Matrix 2: \n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d", &brr[i][j]);
        }
    }

    if(n==p){
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                //RES Mat
                res[i][j] = 0;
                for(int k=0;k<n;k++){
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }

        //Printing
        printf("Enter ANS: \n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Marrix canr");
    }

    return 0;
}