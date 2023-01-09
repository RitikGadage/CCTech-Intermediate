#include "currencyConvertor.h"

using namespace std;

int main()
{
    displayConversion();
    unordered_map<string, double> exchangeRates;
    getExchangeRatesFromFile("currency.txt", exchangeRates);

    double amount;
    string inputCurrency;
    string outputCurrency;
    getUserInput(amount, inputCurrency, outputCurrency);

    double convertedAmount = convertCurrency(amount, inputCurrency, outputCurrency, exchangeRates);

    cout<< amount << " " << inputCurrency << " would be " << convertedAmount << " " << outputCurrency << " on " << __DATE__ << endl;

    return 0;
}