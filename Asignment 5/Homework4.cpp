//
//  main.cpp
//  Homework 4
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a,b;
    printf("Nhap so nguyen duong a: ");
    scanf("%d",&a);
    printf("Nhap so nguyen duong b: ");
    scanf("%d",&b);
    for(int i=a;true;i++){
        if(i%a==0&&i%b==0){
            printf("Boi chung nho nhat la: %d",i);
            break;
        }
    }
}
