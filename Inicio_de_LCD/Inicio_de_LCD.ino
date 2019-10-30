
#include  <Wire.h>
#include  <LiquidCrystal_I2C.h>
 
// Constructor de la librería de LCD 16x2
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
 
void setup()
{
  lcd.begin(16, 2);                          // Indicar a la libreria que tenemos conectada una pantalla de 16x2
  lcd.home ();                              // Mover el cursor a la primera posición de la pantalla (0, 0)
}

void loop()
{ 
 lcd.setCursor ( 0, 0 );                   // Imprimir "Hola Mundo" en la primera linea
  lcd.print("  Hola Mundo  ");              // Mover el cursor a la segunda linea (1) primera columna
  lcd.setCursor ( 0, 1 );                   // Imprimir otra cadena en esta posicion
  lcd.print(" Instituto Tec.");             // Esperar un segundo
  delay(1000); 
}
