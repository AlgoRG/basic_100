﻿#include <stdio.h>
 int main()
 {
     int i, j, k, r, g, b, count=0; 
     scanf("%d %d %d\n", &r, &g, &b);
     for(i=0; i<r; i++)
     {
         for(j=0; j<g; j++)
         {
             for(k=0; k<b; k++)
             {
                 printf("%d %d %d\n", i, j, k);
             }
         }
     }
     
     printf("%d", r*g*b);
     return 0;
 }
