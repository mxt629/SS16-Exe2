//
//  main.c
//  SS16 Bai 2
//
//  Created by Little Chick on 30/03/2022.
//

#include <stdio.h>
#include <math.h>
int check(int num);
void main(int argc, const char * argv[]) {
    int num[100],i,n;
    printf("Nhap N:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Nhap so %d: ",i+1);
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++){
        int x;
        x = check(num[i]);
        if(x == 0){
            printf("%d la boi cua 50\n", num[i]);
        }
    }
}
int check(int num)
{
    if(num%50==0){
        return 0;
    }else
        return 1;
}
