//
//  main.cpp
//  Homework 4
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    float a;
    do{
        printf("nhap vao so nguyen duong a: \n");
        scanf("%f",&a);
    }while(a<=0);
    float b;
    do{
        printf("nhap vao so nguyen duong b: \n");
        scanf("%f",&b);
    }while(b<=0);
    float c;
    do{
        printf("nhap vao so nguyen duong c: \n");
        scanf("%f",&c);
    }while(c<=0);
    
    if(a+b>c&&a+c>b&&b+c>a){
        printf("\n%5f%5f%5f: la 3 canh 1 tam giac",a,b,c);
        float Chuvi;
        Chuvi = a+b+c;
        printf("\nChu vi tam gia la: %f", Chuvi);
        float p;
        p = (a+b+c)    /2;
        float S=sqrt((p-a)*(p-b)*(p-c)*p);
        printf("\nDien tich tam giac S: %f", S);
    }else{
        printf("a,b,c khong la 3 canh 1 tam giac");
    }
}
