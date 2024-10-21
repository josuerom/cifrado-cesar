/**
 * UNIMINUTO | ID 699644 | Ingeniería de Sistemas | Docente: Heyde Pinilla
**/
#define NOMBRE "Josue Romero"

#include <iostream>
#include <string>

using namespace std;

string cifrarCesar(string texto, int desplazamiento) {
   string resultado = "";
   for (char c : texto) {
      if (isalpha(c)) {
         char base = isupper(c) ? 'A' : 'a';
         resultado += (c - base + desplazamiento) % 26 + base;
      } else {
         resultado += c;
      }
   }
   return resultado;
}

string descifrarCesar(string texto, int desplazamiento) {
   return cifrarCesar(texto, 26 - desplazamiento);
}

int main() {
   cout << "\nCIFRADO CESAR | UNIMINUTO | ID 699644 | Ingeniería de Sistemas | Docente: Heyde Pinilla\n\n";

   string texto;
   int opcion, desplazamiento;

   while (true) {
      cout << "Seleccione una opcion:\n1. Cifrar\n2. Descifrar\n0. Salir\n>> ";
      cin >> opcion;

      if (opcion == 0) break;
      else if (opcion == 2)
         cout << "\nTexto descifrado: " << descifrarCesar(texto, desplazamiento) << endl << endl;
      else {
         cout << "Ingrese el texto: ";
         cin.ignore();
         getline(cin, texto);

         cout << "Ingrese el desplazamiento: ";
         cin >> desplazamiento;
         cout << "\nTexto cifrado: " << cifrarCesar(texto, desplazamiento) << endl << endl;
      }
   }
   cout << "\nAutor: " << NOMBRE << endl;
   return 0;
}