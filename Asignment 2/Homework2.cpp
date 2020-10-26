//
//  main.cpp
//  Homework2
//
//  Created by Truong Lam on 10/8/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a, b;
    printf("nhap gia tri a: ");
    scanf("%d",&a);
    printf("nhap gia tri b: ");
    scanf("%d",&b);
    
    if(a>=b){
        if(b==0){
            printf("khong the chia cho 0 \n");
        }else{
            int c=a/b;
            printf("%d/%d=%d \n",a,b,c);
        }
    }else{
        int c=a*b;
        printf("%d*%d=%d \n",a,b,c);
    }
}
