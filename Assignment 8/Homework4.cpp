//
//  main.cpp
//  Homework4
//
//  Created by Truong Lam on 10/27/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a, b, c;
    printf("Nhap canh a: ");
    scanf("%d",&a);
    printf("Nhap canh b: ");
    scanf("%d",&b);
    printf("Nhap canh c: ");
    scanf("%d",&c);
    float x = ((a+b+c)/2);
    float y = (x*(x-a)*(x-b)*(x-c));
    if(a>=a+c && b>=a+c && c>=b+c){
        printf("Ba canh vua nhap khong phai canh cua tam giac\n");
    }else{
        printf("Dien tich tam giac la: %f\n",y);
    }
}
