//
//  main.cpp
//  Homework 2
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int x;
    do{
        printf("Nhap 1 so nguyen duong: ");
        scanf("%d",&x);
    }while(x<=2);
    int a=0,b=0,c=1;
    for(int i=3;b+c<=x;i++){
        a=b;
        b=c;
        c=a+b;}
    printf("So trong day Fibonaci thoa man yeu cau: %d",c);
}
