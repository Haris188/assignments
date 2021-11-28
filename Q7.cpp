#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    // inputs
   float initialVelocity = 5;

    while(distanceFromGround > 0){
        float totalTime = 0;
        while(totalTime < 60){
            float hunderethOfSec = 60/100;
            sleep(hunderethOfSec);

            // DO YOU CALCULATIONS HERE (Update the position and velocity 100 times per second)

            totalTime = totalTime + (hunderethOfSec); //in seconds
        }

        // PRINT SIMULATED DATA HERE
    }

    return 0;
}
