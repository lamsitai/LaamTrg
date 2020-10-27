//
//  main.cpp
//  Homework 3
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a,b;
    int i;
    do{
        printf("Nhap so nguyen duong a: ");
        scanf("%d",&a);
    }while(a<=0);
    do{
        printf("Nhap so nguyen duong b: ");
        scanf("%d",&b);
    }while(b<=0);
    if (a<=b){
        for (i=1;i<=a;i++){
            a%i==0;
            b%i==0;}
            printf("Uoc chung lon nhat la: %d\n", i);
    }else{
        for (i=1;i<=b;i++){
            a%i==0;
            b%i==0;}
            printf("Uoc chung lon nhat la: %d\n", i);
    }
}
