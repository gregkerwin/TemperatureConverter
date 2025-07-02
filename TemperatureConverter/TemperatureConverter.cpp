//TemperatureConverter

#include <iostream>
using namespace std;

void CelsiusToFahrenheit(double, double&);
void FahrenheitToCelsius(double, double&);

int main()
{
    char answer{};
    cout << "Enter whether you want to convert from Fahrenheit to Celsius or Celsius to Fahrenheit" << endl;
    cout << "Type F or C" << endl;
    cin >> answer;


    if (cin.fail() || (answer != 'F' && answer != 'f' && answer != 'C' && answer != 'c'))
    {
        cin.clear();  
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "You must enter 'F' or 'C'!" << endl;
        return 1; 
    }

    if (answer == 'F' || answer == 'f')
    {
        double celsius{};
        double outFahrenheit{};
        cout << "Fahrenheit To Celsius" << endl;
        cout << "Enter the Fahrenheit you want to convert to Celsius" << endl;
        cin >> celsius;
        FahrenheitToCelsius(celsius, outFahrenheit);
        cout << "Conversion:" << outFahrenheit << "Celsius" << endl;
    }
    else if (answer == 'C' || answer == 'c')
    {
        double fahrenheit{};
        double outCelsius{};
        cout << "Fahrenheit To Celsius" << endl;
        cout << "Enter the Celsius you want to convert to Fahrenheit" << endl;
        cin >> fahrenheit;
        CelsiusToFahrenheit(fahrenheit, outCelsius);
        cout << "Conversion:" << outCelsius << "Fahrenheit" << endl;
    }
    else { cout << "You must enter 'F' or 'C'!" << endl; }



}

void CelsiusToFahrenheit(double celsius, double& outFahrenheit)
{
    outFahrenheit = (celsius * 1.8) + 32;
}

void FahrenheitToCelsius(double fahrenheit, double& outCelsius)
{
    outCelsius = (fahrenheit - 32) / 1.8;
}

