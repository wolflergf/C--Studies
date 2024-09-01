#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    const double stateTaxRate = 0.04;
    const double countyTaxRate = 0.02;    

    double totalStateTax = (sales * stateTaxRate);
    double totalCountyTax = (sales * countyTaxRate);

    double totalTax = totalCountyTax + totalStateTax;

    cout << "Sales: £" << sales << endl;
    cout << "State Tax: £" << totalStateTax << endl;
    cout << "County Tax: £" << totalCountyTax << endl;
    cout << "Total Tax: £" << totalTax;

    return 0;

}