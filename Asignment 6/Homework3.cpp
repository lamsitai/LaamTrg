//
//  main.cpp
//  Homework 3
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a;
    printf("Nhap n=");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        printf("nhap arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    int max=0,dem =0;
    for(int i=0;i<a;i++){
        if(arr[i] >0){
            dem++;
            if(dem > max){
                max = dem;
            }
        }else{
            dem=0;
        }
    }
    printf("So luong so duong lien tiep nhieu nhat: %d",max);
}
