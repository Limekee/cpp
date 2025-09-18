#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    std::cout << "==============================" << std::endl;
    std::cout << std::setw(29) <<"OHM'S LAW & POWER CALCULATOR" << std::endl;
    std::cout << std::setw(23) <<"RadioFac Edition" << std::endl;
    std::cout << "==============================" << std::endl;

    std::cout << "\nEnter voltage (V): ";
    float voltageV = 0;
    std::cin >> voltageV;
    
    std::cout << "Enter resistance (Ohm): ";
    int resistanceOhm = 0;
    std::cin >> resistanceOhm; 

    float currentA = voltageV / resistanceOhm;
    float powerW = voltageV * currentA;

    std::cout << "\n--- CALCULATION RESULT ---\n";
    std::cout << "Parameter   " << std::setw(20) << "Value" << std::setw(10)<<"Unit\n";
    std::cout << "-----------------------------------------\n";
    std::cout << "Voltage:    " << std::setw(20) << voltageV << std::setw(10)<<"V\n";
    std::cout << "Resistance: " << std::setw(20) << resistanceOhm << std::setw(10)<<"Ohm\n";

    std::cout << "Current:    " << std::setw(20) << currentA << std::setw(10)<<"А\n";
    std::cout << "Current:    " << std::setw(20) << currentA*1000 << std::setw(10)<<"mА\n";

    std::cout << "Power:      " << std::setw(20) << powerW << std::setw(10)<<"W\n";
    std::cout << "Power:      " << std::setw(20) << powerW*1000 << std::setw(10)<<"mW\n";
    std::cout << "Power (dBm):" << std::setw(20) << 10*std::log10f(powerW/0.001) << std::setw(10)<<"dBm\n";
    return 0;
}