#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

using namespace std;

void getExchangeRatesFromFile(string fileName, unordered_map<string, double> &exchangeRates)
{
    ifstream exchangeRateFile(fileName);
    if (!exchangeRateFile.is_open())
    {
        cout << "Error opening exchange rate file" << endl;
        return;
    }

    string currency;
    double rate;
    while (exchangeRateFile >> currency >> rate)
    {
        exchangeRates[currency] = rate;
    }
    exchangeRateFile.close();
}

void displayConversion()
{
    cout << "\nCURRENCY CONVERTOR LIST\n\n"; 
    cout << "1. GBP\n"
         << "2. INR\n"
         << "3. EUR\n"
         << "4. CHF\n"
         << "5. AUD\n"
         << "6. SGD\n"
         << "7. CNY\n"
         << "8. JPY\n";
}

void getUserInput(double &amount, string &inputCurrency, string &outputCurrency)
{
    cout << "Enter the currency name mentioned above only" << endl;
    cout << "Enter the currency you have: ";
    cin >> inputCurrency;

    cout << "Enter the currency in which you want to convert: ";
    cin >> outputCurrency;

    cout << "Enter the amount to convert: ";
    cin >> amount;
}

double convertCurrency(double amount, string inputCurrency, string outputCurrency, unordered_map<string, double> exchangeRates)
{
    if (exchangeRates.count(inputCurrency) == 0)
    {
        cout << "Select valid input currency from the list" << endl;
        return 0;
    }

    double baseAmount = amount / exchangeRates[inputCurrency];

    if (exchangeRates.count(outputCurrency) == 0)
    {
        cout << "Select valid output currency from the list" << endl;
        return 0;
    }

    double outputAmount = baseAmount * exchangeRates[outputCurrency];
    return outputAmount;
}


