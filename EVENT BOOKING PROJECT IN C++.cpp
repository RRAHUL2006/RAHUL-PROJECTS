//                               CATTERING BOOKING SYSTEM FOR EVENTS IN C++
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
cout<<"*************************WELCOME  TO OUR CATERING SERVICE******************************"<<endl;
cout<< "\n\n\n[WE ARE SUPPLYING FOODS FOR ALL THE EVENTS, PARTIESE, AND FUNCTIONS]"<<endl;

string NameOfEvent, CustomerName;	              // Name of Event + Customer Name
double NumberOfGuests;	                         // Number of Guests in attendance
int NumberOfMinutes;	                        // Number of Minutes in the event



// Information input (Events name and amounts)

cout << "\n\nEnter the name of the event " << endl;
getline(cin, NameOfEvent);
cout << "Enter the customer Name " << endl;
getline(cin, CustomerName);
cout << "Enter the number of guests " << endl;
cin >> NumberOfGuests;
cout << "\n\nEnter the number of minutes in the event for conducting events " << endl;
cin >> NumberOfMinutes;

cout << "\n\n\n THE EVENT DETAILS FOR CUSTOMER IS" << endl;
cout << "\n\nEvent estimate for  " << CustomerName << endl;

int NumberOfServers, Cost1;
double CostForOneServer,Test, TotalFoodCost, AverageCost, Cost2, DepositAmount,TotalCost;

const double CostPerHour = 18.50;
const double CostPerMinute = .40;
const double CostOfDinner = 20.70;

// Get Number Of Servers
Test = NumberOfGuests / 20;
NumberOfServers = ceil(Test);

// Get Cost Of One Server
Cost1 = (NumberOfMinutes / 60) * CostPerHour;
Cost2 = (NumberOfMinutes % 60) * CostPerMinute;
CostForOneServer = Cost1 + Cost2;

// Get Cost For Food
TotalFoodCost = NumberOfGuests * CostOfDinner;

// Get Average Cost Per Person
AverageCost = TotalFoodCost / NumberOfGuests;

// Get Total Cost
TotalCost = TotalFoodCost + (CostForOneServer * NumberOfServers);

// Get Deposit Amount (25%)
DepositAmount = TotalCost * .25;

// Print values above
cout << "\n*Number Of Server For serving foods: " << NumberOfServers << fixed << setprecision(2) << endl;
cout << "\n*The Cost for each Servers salary : " << setw(5) << CostForOneServer << endl;
cout << "\n*The Cost for Food organising for the event is: " << setw(5) << TotalFoodCost << endl;
cout << "\nAvergae Cost for Per Person: " << setw(5) << AverageCost << endl;
cout << "\n*Total cost to pay for the event is : " << setw(5) << TotalCost << endl;

cout << "\n\n\nPlease deposite a 25% deposit to reserve the event in advance" << endl;
cout << "\n*The deposit needed is: " << setw(5) << DepositAmount << endl;


cout<<"\n\n\n{for any query please visit our website:[www.RRAHUL.com] or [contact 8939650849]" <<endl;


cout<< "\n\n\n\n\n########################THANK YOU FOR BOOKING OUR CATERING SERVICE#########################" <<endl;

return 0;
}
