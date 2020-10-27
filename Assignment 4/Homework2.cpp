//
//  main.cpp
//  Homework 2
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    do{
        printf("nhap vao 1 so nguyen duong: ");
        scanf("%d",&n);
    }while(n<=0);
    float s = 0;
    for(int i=1;i<=n;i++){
        s = s + (float)1/i;
    }
    printf("S = %f\n", s);
}
