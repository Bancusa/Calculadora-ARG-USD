#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double precioDolar, tipoCambio;
    // Primero pedimos el valor de la compra y luego el valor de cambio
    cout << "Ingrese el precio en dolares USD (en caso de decimales usar punto)" << endl;
    cin >> precioDolar;

    cout << "Ingrese el tipo de cambio (ARS/USD)" << endl;
    cin >> tipoCambio;
    //Declaramos variables y realizamos las sumas y multiplicaciones correspondientes
    double precioARS = precioDolar * tipoCambio;
    double iva = precioARS * 0.21;
    double ingresosBrutos = precioARS * 0.02;
    double totalFinal = precioARS + iva + ingresosBrutos;
    //Esta linea es para indicar un maximo de 2 digitos despues del punto (coma en español)
    cout << fixed << setprecision(2); 
    //Indicamos cuanto vale cada impuesto/valor y colocamos el precio de cada uno y el precio total neto
    cout << "\n--- Precio final con impuestos ---\n";
    cout << "Precio base (ARS): " << precioARS << endl;
    cout << "IVA 21%: " << iva << endl;
    cout << "Ingresos Brutos 2%: " << ingresosBrutos << endl;
    cout << "Final total (ARS): " << totalFinal << endl;
    //Si se quiere se puede poner esta linea, pero no modifica nada solo le indicamos a la consola/terminal que no siga ejecutando el codigo
    return 0;
}
