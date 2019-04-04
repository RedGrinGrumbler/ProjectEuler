#include <iostream>
#include <vector>

    using namespace std;

    void findPrimes(long num, long i = 0, long big = 0){
        // vector<long> v = {};
        long k;
        for(i=2; i < num; i++)
            if (num % i == 0){
                k = i;
                // v.push_back(k);
                big = i;
                cout << big << "\n";
            }

        // int arrNum = v.size();
        // int pos = 0;
        // for(i=2; i < arrNum; i++; pos++){
        //     if (v[pos] % i == 0)
        //         pos++;
        // }

    }

    int main (){ 
        findPrimes(600851475143);

        return 0;
    }
