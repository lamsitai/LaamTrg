//
//  main.cpp
//  Homework 3
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a = 0;
    for(int n=1;n<=100;n++){
        a=a+(2*n-1);
    }
    printf("Tong 100 so le dau tien S = %d", a);
}
