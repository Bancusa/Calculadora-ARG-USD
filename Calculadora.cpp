#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double precioDolar, tipoCambio;

    cout << "Ingrese el precio en dolares USD (en caso de decimales usar punto)" << endl;
    cin >> precioDolar;

    cout << "Ingrese el tipo de cambio (ARS/USD)" << endl;
    cin >> tipoCambio;

    double precioARS = precioDolar * tipoCambio;
    double iva = precioARS * 0.21;
    double ingresosBrutos = precioARS * 0.02;
    double totalFinal = precioARS + iva + ingresosBrutos;

    cout << fixed << setprecision(2); 

    cout << "\n--- Precio final con impuestos ---\n";
    cout << "Precio base (ARS): " << precioARS << endl;
    cout << "IVA 21%: " << iva << endl;
    cout << "Ingresos Brutos 2%: " << ingresosBrutos << endl;
    cout << "Final total (ARS): " << totalFinal << endl;
}