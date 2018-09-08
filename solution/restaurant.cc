#include <iomanip>
#include <iostream>

using namespace std;
int main() {

  double meal_cost,
         tip_percentage,
         taxes, 
         tip, 
         total;

  cout << "Please input meal cost: ";
  cin >> meal_cost;
  cout << "Please input tip percentage: ";
  cin >> tip_percentage;
  cout << endl;
  cout << "Restaurant Bill" << endl;
  cout << "====================" << endl;
  double subtotal = meal_cost;
  cout << fixed << setprecision(2);
  cout << "Subtotal: $" << meal_cost << endl;
  taxes = meal_cost * 0.075;
  cout << "Taxes: $" << taxes << endl;
  tip = subtotal * tip_percentage / 100;
  cout << "Tip: $" << tip << endl;
  cout << "====================" << endl;
  total = meal_cost + tip + taxes;
  cout << "Total: $" << total << endl;
  return 0;
}
