//
//  main.cpp
//  Homework 1
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a;
    printf("Nhap so nguyen duong: ");
    scanf("%d",&a);
    int x = 0;
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    if(a!=0){
        x = x*10 + a%10;
        a /=10;
    }
    printf("So dao nguoc la: %d\n",x);
}
