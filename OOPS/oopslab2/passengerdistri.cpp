#include <iostream>
#include <string>
using namespace std;

class Travel
{
  string destination;
  int passengers;
  static const int busCapacity = 50; // 1 bus = 50 seats

public:
  // Function to take input from user
  void getDetails()
  {
    cout << "Enter destination: ";
    cin >> destination; // user se jagah ka naam lena
    cout << "Enter number of passengers: ";
    cin >> passengers; // user se kitne passenger hain
  }

  // Function to display details and calculate buses
  void showDetails()
  {
    cout << "\n--- Travel Details ---" << endl;
    cout << "Destination: " << destination << endl;
    cout << "Total Passengers: " << passengers << endl;

    // Formula: (passengers + busCapacity - 1) / busCapacity => ceil division
    int buses = (passengers + busCapacity - 1) / busCapacity;

    cout << "Number of buses required: " << buses << endl;
  }
};

int main()
{
  Travel t;        // ek object banaya
  t.getDetails();  // user se input liya
  t.showDetails(); // output display kara
  cout << "sarvesh pandey IT-EVE" << endl;
  return 0;
}
