#include "Tesla.h"

int main() {
    // Create four different Tesla objects
    Tesla tesla1;  // Default constructor
    Tesla tesla2("Model Y");  // Constructor with model specified
    Tesla tesla3("Model S", true); // Constructor with model and dual_motor selection
    Tesla tesla4("Model X", "red", true, true); // Fully Customizable
    
    cout << "==============================================================================\n";

    cout << "Tesla 1: " << tesla1.getModel() << " | Color: " << tesla1.getExteriorColor() << " | Motor: ";

    if (tesla1.getIsDualMotor()) {
        cout << "Dual Motor ";
    } else {
        cout << "Single Motor ";
    }

    if (tesla1.getIsFullSelfDriving()) {
        cout << " | Full Self-Driving" << endl;
    } else {
        cout << " | Not Full Self-Driving" << endl;
    }

    cout << "Tesla 2: " << tesla2.getModel() << " | Color: " << tesla2.getExteriorColor() << " | Motor: ";

    if (tesla2.getIsDualMotor()) {
        cout << "Dual Motor ";
    } else {
        cout << "Single Motor ";
    }

    if (tesla2.getIsFullSelfDriving()) {
        cout << " | Full Self-Driving" << endl;
    } else {
        cout << " | Not Full Self-Driving" << endl;
    }

    cout << "Tesla 3: " << tesla3.getModel() << " | Color: " << tesla3.getExteriorColor() << " | Motor: ";

    if (tesla3.getIsDualMotor()) {
        cout << "  Dual Motor ";
    } else {
        cout << "Single Motor ";
    }

    if (tesla3.getIsFullSelfDriving()) {
        cout << " | Full Self-Driving" << endl;
    } else {
        cout << " | Not Full Self-Driving" << endl;
    }

    cout << "Tesla 4: " << tesla4.getModel() << " | Color:   " << tesla4.getExteriorColor() << " | Motor: ";

    if (tesla4.getIsDualMotor()) {
        cout << "  Dual Motor ";
    } else {
        cout << "Single Motor ";
    }

    if (tesla4.getIsFullSelfDriving()) {
        cout << " | Full Self-Driving" << endl;
    } else {
        cout << " | Not Full Self-Driving" << endl;
    }
    cout << "==============================================================================\n";

    return 0;
}
