//
//  main.cpp
//  Homework 1
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int n;
    do{
        printf("nhap vao 1 nguyen duong: ");
        scanf("%d",&n);
    }while(n<=0);
    int s = 0;
    for(int i=1;i<=n;i++){
        s = s+i;
    }
    printf("S = %d\n", s);
}
