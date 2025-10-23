/*
NAME: JOSEPH THUO MAINA
REG NO: CT100/G/26131/25
DATE: 22 OCT 2025
DESC: Simple c program to calculate electric bill consumed
*/

#include <stdio.h>

// Function to calculate electric bill based on units consumed
int calculateElectricBill(int units) {
    int bill = 0;
    
    if (units <= 100) {
        bill = units * 10; // First 100 units at 10 KSh each
    } else if (units <= 200) {
        // First 100 units at 10 KSh + remaining units at 15 KSh
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        // First 100 units at 10 KSh + next 100 units at 15 KSh + remaining units at 20 KSh
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    }
    
    return bill;
}

int main() {
    int units = 250;
    printf("Total bill for %d units is KSh. %d\n", units, calculateElectricBill(units));
    return 0;
}
