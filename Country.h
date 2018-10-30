#ifndef COUNTRY_H
#define COUNTRY_H
/**
class Country
*/
using namespace std;
class Country
{
private:
   double population, area, density;
   string name;
public:
   Country(); // Constructor
   void read(); // Mutator
   bool is_larger_than(Country b) const; // Compares the two countries and finds the larger area
   bool is_more_populated_than(Country b) const; // Compares the two countries and finds the more popuated
   bool is_denser_than(Country b) const; // Compares the two countries and finds the denser populated
   void printpop() const; // Prints the results
   void printarea() const; // Prints the results
   void printdensity() const; // Prints the results
};
#endif
