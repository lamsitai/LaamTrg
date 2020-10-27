//
//  main.cpp
//  Homework3
//
//  Created by Truong Lam on 10/8/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int d, m, x = 0;
    printf("nhap ngay: ");
    scanf("%d",&d);
    printf("nhap thang: ");
    scanf("%d",&m);
    if(m==1){
        x=d;
    }
    if(m==2){
        x=31+d;
    }
    if(m==3){
        x=31+28+d;
    }
    if(m==4){
        x=31+28+31+d;
    }
    if(m==5){
        x=31+28+31+30+d;
    }
    if(m==6){
        x=31+28+31+30+31+d;
    }
    if(m==7){
        x=31+28+31+30+31+30+d;
    }
    if(m==8){
        x=31+28+31+30+31+30+d;
    }
    if(x%7==0){
        printf("day la ngay thu %d trong nam va la chu nhat\n",x);
    }else{
        int thu = x%7+1;
        printf("day la ngay thu %d trong nam va la thu %d\n",x,thu);
    }
}
