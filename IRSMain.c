//
//  IRSMain.c
//  Created by Joe Fiene on 2/28/14.

#include <stdio.h>
#include <stdlib.h>
//-----------------------------------------------------------------------------

int main(void) {
    
    
    int start = 1;
    int income = 0;
    int deduction = 0;
    int totalIncome = 0;
    char group = 'P';
    int percent = 0;
    int taxOwed = 0;
    
    while(start!=0) {
        start = 0;
        printf("Enter next amount : ");
        scanf("%d",&start);
        if(start > 0) {
            income = income+start;
        } else {
            deduction = (start*-1) + deduction;
        }
       // printf("%3d input\n",income);
       // printf("%3d deduction\n", deduction);
    }
    
    if (income>deduction) {
        totalIncome = income - deduction;
       // printf("%3d totalIncome\n",totalIncome);
    } else {
        totalIncome = 0;
    }
    
       // printf("Tax owed       = %3d \n");
    
    if (totalIncome >= 500000) {
        group = 'S';
        percent = 25;
        
    } else if (totalIncome >= 200000) {
        group = 'Q';
        percent = 25;
        
    } else if (totalIncome >= 100000) {
        group = 'M';
        percent = 10;
        
    } else if (totalIncome >=50000) {
        group = 'A';
        percent = 10;
        
    } else if (totalIncome >= 20000) {
        group = 'R';
        percent = 3;
        
    } else {
        group = 'P';
        percent = 0;
    }
    
    taxOwed = (totalIncome * percent)/100;
    
    printf("\n");
    
    printf("Income         = %3d income\n",income);
    printf("Deductions     = %3d deductions\n", deduction);
    printf("Taxable Income = %3d totalIncome\n",totalIncome);
    printf("Tax group      = %3c tax group \n", group);
    printf("Tax owed       = %3d tax amount \n",taxOwed);

        
    

    
    return(EXIT_SUCCESS);
}
//-----------------------------------------------------------------------------