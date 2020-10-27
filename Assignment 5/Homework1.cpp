//
//  main.cpp
//  Homework 1
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int x;
    do{
        printf("nhap 1 so nguyen duong: ");
        scanf("%d",&x);
    }while(x<=2);
    int a=0,b=1,c=1;
    for(int i=3;i<x;i++){
        a=b;
        b=c;
        c=a+b;}
    printf("so thu %d trong day Fibonaxi: %d\n",x,c);
}
