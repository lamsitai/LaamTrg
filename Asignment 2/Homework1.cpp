//
//  main.cpp
//  Homework1
//
//  Created by Truong Lam on 10/8/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a;
    printf("nhap so nguyen: ");
    scanf("%d",&a);
    
    if(a>=2 && a<=8){
        if(a==2){
            printf("day la thu %d \n",a);
        }if(a==3){
            printf("day la thu %d \n",a);
        }if(a==4){
            printf("day la thu %d \n",a);
        }if(a==5){
            printf("day la thu %d \n",a);
        }if(a==6){
            printf("day la thu %d \n",a);
        }if(a==7){
            printf("day la thu %d \n",a);
        }if(a==8){
            printf("day la chu nhat \n");
        }
    }else{
        printf("day khong phai ngay trong tuan \n");
    }
}
