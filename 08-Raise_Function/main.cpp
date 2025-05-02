#include <iostream>
#include <csignal>  // For signal handling
#include <unistd.h> // For sleep function

using namespace std;

void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main(){

    signal(SIGINT, signalHandler); // Register signal handler for SIGINT

    int i = 0;
    while(++i){
        cout << "Running... " << i << endl;
        if (i == 5) {
            raise(SIGINT); // Raise SIGINT signal
        }
        sleep(1); // Sleep for 1 second
    }


    return 0;
}