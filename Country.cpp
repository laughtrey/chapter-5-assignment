#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
#include "Country.h"
using namespace std;
// Constructor
Country::Country()
{
   area = 1;
   population = 1;
   density = 1;
}
// ---Functions---
// Mutator or setter functions
void Country::read()
{
   cout << "Please enter the name of the country: ";
   getline(cin, name);
   cout << "Please enter the population in millions: ";
   cin >> population;
   cout << "Please enter the area in kilometers squared in millions: ";
   cin >> area;
   density = (population / area);
   string remainder;
   getline(cin, remainder);
}
// Compares two areas
bool Country::is_larger_than(Country b) const
{
   if (area == 0) return true;
   if (b.area == 0) return false;
   return area > b.area;
}
// Compares two populations
bool Country::is_more_populated_than(Country b) const
{
   if (population == 0) return true;
   if (b.population == 0) return false;
   return population > b.population;

}
// Compares two densities
bool Country::is_denser_than(Country b) const
{
   if (density == 0) return true;
   if (b.density == 0) return false;
   return density > b.density;

}
// Prints the population
void Country::printpop() const
{
   cout << name << endl;
   cout << "Population: " << population << endl;
}
// Prints the area
void Country::printarea() const
{
   cout << name << endl;
   cout << "Area:" << area << endl;
}
// Prints the density
void Country::printdensity() const
{
   cout << name << endl;
   cout << "Density: " << density << " million people per square kilometer."<< endl;
}
