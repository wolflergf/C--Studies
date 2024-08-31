#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    const double stateTax = 0.04;
    const double countyTax = 0.02;    

    double totalStateTax = (sales * stateTax);
    double totalCountyTax = (sales * countyTax);

    double totalTax = totalCountyTax + totalStateTax;

    cout << "My total sales is £" << sales << endl;
    cout << "My state tax is £" << totalStateTax << endl;
    cout << "My county tax is £" << totalCountyTax << endl;
    cout << "My total tax is £" << totalTax;

    return 0;

}