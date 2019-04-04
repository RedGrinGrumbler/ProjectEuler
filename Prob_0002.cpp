//RedGrinGrumle
#include <iostream>

using namespace std;

void display(bool which, int low, int high, int sumTot){
    //Keeping Code Clean
    //True: Main Fibonacci Sequence
    //False: Clearly Show the Additive Values
    if (which)
    	printf("\n  Low: %d\tHigh: %d         \tSumTot: %d",
                low, high, sumTot);
    else 
	printf("\t= %d + %d",
                sumTot, high);
}

void sumUp(int ceiling, int low, int high, int sumItr = 0, int sumTot = 0){

    display(true, low, high, sumTot);

    sumItr = low + high;
    low = high;
    high = sumItr;
    
    if (low + high < ceiling){
        if (sumItr%2 == 0){

            display(false, low, high, sumTot);

            sumTot += sumItr;
            sumUp(ceiling, low, high, sumItr, sumTot);

        }else{

            sumUp(ceiling, low, high, sumItr, sumTot);
        }

    }else {
        if (sumItr%2 == 0)
            sumTot += sumItr;
        display(true, low, high, sumTot);
	display(false, low, high, sumTot);
        printf("\n\n\tDone");
    }
        return; 
}

int main()
{    
    sumUp(4000000, 1, 1);
      return 0;
}
