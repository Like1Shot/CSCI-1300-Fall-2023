#ifndef TESLA_H
#define TESLA_H

#include <iostream>
using namespace std;

class Tesla
{
    private:    // These variables are protected(private) and cannot be directly accessed from outside of the class!
        string _model;
        string _ext_color;
        bool _dual_motor;
        bool _full_self_driving;

    public:
        /* ===== Constructors ===== */
        Tesla();                // You just want the base model --> Default Constructor
        Tesla(string model);    // You are a car Rental shop owner... might only care about "Model 3" and "Model Y" with default options
        Tesla(string model, bool dual_motor);   // You are in Colorado and you want AWD/dual motor with default options and want to specify a model
        Tesla(string model, string ext_color, bool dual_motor, bool full_self_driving);    // Fully customizable

        /* ===== Getters(Accessors) Setters(Mutators) ===== */      // In order to interact with the private variables! 
        
        // Getters (Accessors)
        string getModel() const;
        string getExteriorColor() const;
        bool getIsDualMotor() const;
        bool getIsFullSelfDriving() const;

        // Setters(Mutators)
        void setModel(string model);
        void setExteriorColor(string ext_color);
        void setIsDualMotor(bool dual_motor);
        void setIsFullSelfDriving(bool full_self_driving);
};

#endif
