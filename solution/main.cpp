#include <iomanip>
#include <iostream>

int main() {

  double meal_cost, tip_percentage, taxes, tip, total;

  std::cout << "Please input meal cost: ";
  std::cin >> meal_cost;
  std::cout << "Please input tip percentage: ";
  std::cin >> tip_percentage;
  std::cout << "\n";
  std::cout << "Restaurant Bill\n";
  std::cout << "====================\n";
  double subtotal = meal_cost;
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "Subtotal: $" << meal_cost << "\n";
  taxes = meal_cost * 0.075;
  std::cout << "Taxes: $" << taxes << "\n";
  tip = subtotal * tip_percentage / 100;
  std::cout << "Tip: $" << tip << "\n";
  std::cout << "===================="
            << "\n";
  total = meal_cost + tip + taxes;
  std::cout << "Total: $" << total << "\n";
  return 0;
}
