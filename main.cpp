#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    float d1,d2;
    cout << "Enter Width: " ; 
    cin >> d1; 
    cout << "Enter Length: "; 
    cin >> d2; 
    // puts in dimensions 
    
    int plotArea;
    plotArea = d1*d2; 
    cout << "The area of the farm is: " << plotArea << " sq ft" << endl;
    // puts area of farm

    float squareLand = 0.06;
    float plotCost; 
    plotCost = plotArea*squareLand;
    cout  << fixed  << setprecision(2)<< "The farm's maintenance cost is: $" << plotCost << endl; 
    // puts maintenance cost

    int pumpkinsPerWidth;
    int pumpkinsPerLength; 
    int pumpkinCap; 
    int wholePumpkins; 
    pumpkinsPerWidth = d1/4; 
    pumpkinsPerLength = d2/4; 
    wholePumpkins = pumpkinsPerWidth*pumpkinsPerLength; 
    cout << "The farm's pumpkin capacity is: " << wholePumpkins << endl; 
    // puts pumpkin capacity
    
    float pumpkinVolume; 
    pumpkinVolume = (4.0/3.0)*(3.14); 
    cout << "The volume of all the pumpkins is: " << pumpkinVolume*wholePumpkins << " cu ft" << endl; 
    // puts pumpkin volume
   
   int numTrips; 
   numTrips = (pumpkinVolume*wholePumpkins)/(672.0)+0.5; 
   cout << "The total trips to the market will be: " << numTrips << endl; 
   // puts number of trips to market
   
   float gasCost; 
   gasCost = numTrips*(33.63); 
   cout << "The transportation cost is: $" << gasCost << endl;
   // puts transportation cost
   
   float grossProfit; 
   grossProfit = (5.25)*wholePumpkins; 
   cout << "The gross profit is: $" << grossProfit << endl; 
   // puts gross profit
   
   float netProfit; 
   netProfit = grossProfit - (plotCost+gasCost); 
   cout << "The farmer's net profit is: $" << netProfit; 
   // puts net profit
   
   return 0; 
    
}






