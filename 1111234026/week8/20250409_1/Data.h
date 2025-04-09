// Fig. 9.4: Data.h
// Data class containing a constructor with default arguments.
// Member functions defined in Data.cpp.

// prevent multiple inclusions of header 
#ifndef DATA_H
#define DATA_H

// Data class definition
class Data {
public:
    explicit Data(int year = 1990, int month = 1, int day = 1); // Constructor with default values

    // Set functions
    void setData(int year, int month, int day); // Set year, month, day
    void setYear(int year);   // Set year (with validation)
    void setMonth(int month); // Set month (with validation)
    void setDay(int day);     // Set day (with validation)

    // Get functions
    unsigned int getYear() const;  // Return year
    unsigned int getMonth() const; // Return month
    unsigned int getDay() const;   // Return day

    // Abstract-like methods for printing (implementation in Data.cpp)
    void printWestern() const;  // Print Western (AD) date
    void printROC() const;      // Print Republic of China (ROC) date

private:
    unsigned int year;  // 1911 - 2050 (Western year)
    unsigned int month; // 1 - 12
    unsigned int day;   // 1 - 31 (depends on month)
}; // end class Data

#endif