//
//  main.cpp
//  Homework 5
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a;
    do{
        printf("nhap vao so nguyen duong : ");
        scanf("%d",&a);
    }while(a<=0);
    int b = 0;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            b = b+1;
        }
    }
    if (b==2){
        printf("%d la SNT", a);}
    else{
        printf("%d khong la SNT", argv);
    }
}
