﻿#include "stdio.h"
void main()
{
    int i = 1;
    int sum = 0;
    while(i <= 100) {
    	/**
    	当i = 1，判断 i < =100,成立，
    	执行sum + 1 =>sum = 1, i++,此时i为2，接着第二次循环，
    	判断 i <= 100(2 <= 100),成立，
    	执行sum + i => 1 + 2=3，i++，此时i为3，接着第三次循环，
    	着火i <= 100(3 <= 100),成立，
    	执行sum + i => 3 + 3=6，i++，此时i为4，接着第四次循环
    	
    	*/
    	sum = sum + i;
    	i++; // 一定要加上增量表达式，如果没加，会造成无限循环（死循环）
    }
    printf("sum = %d\n", sum);
}