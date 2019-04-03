/*

This tries to count through two given variable up to a ceiling
As the program iterates it add each iteration to the current sum
If the iteration is divisible by the second variable, it takes half of the current 
iterative value.
       # the second half is made up in the second variables routine
Further if the variable is ALSO NOT divisible by 2, it adds 1 to the current sum
       # I've been having trouble with decimal math through this problem, this is a 
         simple work around.

NOTE: the problem says " Sum the multiples of 3 or 5, which are below 1000" I am not 
      sure if the OR statement is exclusive or not? This program does not exclude 
      numbers that are multiples of both.

EDIT: This explains that its much easier to explain it as 
      SumX + SumY - Sum(X*Y) = Sum of all multilples X & Y below sum number N
      Following the summation Sum(N) = 1/2 N (N + 1)
      
Source:
[ https://math.stackexchange.com/questions/9259/find-the-sum-of-all-the-multiples-of-3-or-5-below-1000 ]       
                
*/

#include <iostream>
#include <iomanip>

using namespace std;

int sumUp(int ceiling, int diff, int diff2, int currIter = 0, int sum = 0){

    currIter += diff;
    sum = sum + currIter;

// - - - - - - - - - - - - - - - - - - - - - - - -

    if (currIter + diff < ceiling){
        sumUp(ceiling, diff, currIter, sum);
     }

// - - - - - - - - - - - - - - - - - - - - - - - -

    else {

        cout <<"itr: " << currIter <<"\tsum: " << sum << "\tT/F: -" << endl << endl;
        return sum;
     }
}

void getMult (int ceiling, int x, int y){

     int sumX = sumUp(ceiling, x);
       cout << "\t-\t-\t-\t-\t-" << endl
            << "\tsumX: " << sumX << endl << endl;

     int sumY = sumUp(ceiling, y);
       cout << "\t-\t-\t-\t-\t-" << endl
            << "\tsumY: " << sumY << endl << endl;

     int sumXY = sumUp(ceiling, (x*y));
       cout << "\t-\t-\t-\t-\t-" << endl
            << "\tsumXY: " << sumXY << endl << endl;

     cout << "\tsumXY: " << sumY + sumX - sumXY;
}

int main() {

  getMult(1000, 3, 5);

}
