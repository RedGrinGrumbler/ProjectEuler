#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *next; // Pointer to next node
    struct node *prev; // Pointer to previous node
};

void sumUp(int ceiling, int low, int high, int sumItr = 0, int sumTot = 0){
    int preSum = sumTot;
    printf("\n  Low: %d\tHigh: %d         \tSumTot: %d",
                low, high, sumTot);
    sumItr = low + high;
    low = high;
    high = sumItr;
    
    if (low + high < ceiling){
        if (sumItr%2 == 0){
            printf("\t= %d + %d",
                sumTot, high);
            sumTot += sumItr;
            sumUp(ceiling, low, high, sumItr, sumTot);
        }else{
            sumTot = preSum;
            sumUp(ceiling, low, high, sumItr, sumTot);
        }
    }else{
        if (sumItr%2 == 0){
            sumTot += sumItr;
        }
        printf("\n\n  Low: %d\tHigh: %d \t\tSumTot: %d\n\n",
                low, high, sumTot);
        printf("\n\n\tDone");

    }
    return;
}

int main(){ 

    sumUp(4000000, 1, 1);

      return 0;
}
