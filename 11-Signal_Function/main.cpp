#include <iostream>
#include <csignal> // for signal handling
#include <unistd.h> // for sleep function

using namespace std;

// Signal handler function
void signalHandler(int signum) {
    cout << "Interrupt signal (" << signum << ") received.\n";
    // Cleanup and close up stuff here
    // Terminate program
    exit(signum);
}

int main(){

    signal(SIGINT, signalHandler); // Register signal handler for SIGINT (Ctrl+C)

    while(1) {
        cout << "Program running... Press Ctrl+C to interrupt.\n";
        sleep(1); // Sleep for 1 second
    }


    return 0;
}