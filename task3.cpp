#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    const double PI = 3.14159265359;


    std::cout << "???????????????????????????????????\n";
    std::cout << "?" << std::setw(4) << "   RF ENGINEERING TOOLKIT v3.0" << std::setw(5) << "?\n";
    std::cout << "?" << std::setw(4) << "     RadioFac Professional    " << std::setw(5) << "?\n";
    std::cout << "???????????????????????????????????\n\n";


    std::cout << "=== SECTION 1: VOLTAGE DIVIDER ===\n";

    float voltgeV = 0;
    float R1 = 0;
    float R2 = 0;

    std::cout << "Enter input voltage (V): ";
    std::cin >> voltgeV;

    std::cout << "Enter R1(Ohm): ";
    std::cin >> R1;

    std::cout << "Enter R2(Ohm): ";
    std::cin >> R2;

    std::cout << "\nResults: \n"; 
    std::cout << "Output voltage: " << voltgeV*(R2/(R1+R2)) << " V";
    std::cout << "\nDevision ratio: " << R2/(R1+R2);
    
    std::cout << "\n\n===================================\n\n";


    std::cout << "=== SECTION 2: RC FILTER ===\n";

    float resistanceKOhm = 0;
    float capacitanceNF = 0;

    std::cout << "Enter resistance (kOhm): ";
    std::cin >> resistanceKOhm;

    std::cout << "Enter capacitance (nF): ";
    std::cin >> capacitanceNF;
    
    float timeConstant = capacitanceNF*resistanceKOhm;
    float cutoffFrequencyHz = (1/(2*PI*capacitanceNF*resistanceKOhm)) * std::pow(10, 6);
    float cutoffFrequencyKhz = (1/(2*PI*capacitanceNF*resistanceKOhm)) * std::pow(10, 3);

    std::cout << "\nResults: \n"; 
    std::cout << "Time constant: " << timeConstant<< " s";
    std::cout << "\nCutoff frequency: " << cutoffFrequencyHz << " Hz";
    std::cout << "\nCutoff frequency: " << cutoffFrequencyKhz << " kHZ";
    
    std::cout << "\n\n===================================\n\n";


    std::cout << "=== SECTION 3: CAPACITIVE REACTANCE ===\n";

    float capacitanceNf = 0;
    float frequencyMhz = 0;

    std::cout << "Enter capacitance (pF): ";
    std::cin >> resistanceKOhm;

    std::cout << "Enter frequency (MHz): ";
    std::cin >> capacitanceNF;
    
    float capcitiveReactanceOhm = 1/(2*PI*resistanceKOhm*capacitanceNF)* std::pow(10, 6);

    std::cout << "\nResults: \n"; 
    std::cout << "Capcitive reactance: " << capcitiveReactanceOhm<< " Ohm";

    std::cout << "\n\n===================================\n\n";
    return 0;
}