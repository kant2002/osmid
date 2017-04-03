#include <iostream>
#include <chrono>
#include <thread>
#include "../JuceLibraryCode/JuceHeader.h"

using namespace std;
int main(int argc, char* argv[])
{
    while (true) {
        auto devices = MidiInput::getDevices();
        cout << "MIDI Input Devices: " << endl;
        for (const auto& device : devices) {
            cout << "- " << device << endl;
        }
        chrono::milliseconds timespan(1000);
        this_thread::sleep_for(timespan);
    }
}
