//
//  main.cpp
//  Homework 2
//
//  Created by Truong Lam on 10/26/20.
//  Copyright © 2020 Truong Lam. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    float tk=4000, ls=0.08;
    int n=0;
    for (int i=0;tk<1000000;tk+=tk*ls,n++,i++);
        printf("so nam can gui l‡: %d\n",n);
}
