#include <iostream>
#include <cmath>
int main(){

/*
//Program obliczający pole trójkąta z podanych boków
double a,b,c;
std::cout << "Podaj a  ";
std::cin >> a;
std::cout << "Podaj b ";
std::cin >> b;
std::cout << "Podaj c (największy bok) ";
std:: cin >> c;
if((a+b)>c){
    std::cout << "Można zbudować trójkąt" << std::endl;
    double p = (a+b+c)/2;
    std::cout << "Pole trójkąta wynosi: " << sqrt(p*(p-a)*(p-b)*(p-c));
}
else
    std::cout << "Nie można zbudować trójkąta - bok c jest za krótki.";

*/

/*
double a, b;
std::cout << "Podaj a ";
std::cin >> a;
std::cout << "Podaj b ";
std::cin >> b;
std::cout << "a + b = " << a+b << std::endl << "a - b = " << a-b << std::endl << "a * b = " << a*b << std::endl;
std::cout << "a / b = " << (1.0*a)/(1.0*b) << std::endl;
*/


//Program sortujący podane liczby w kolejności rosnącej

int x,y,z;
std::cout << "Podaj x,y,z: " << std::endl;
std::cin >> x >> y >> z;
int tablica[x,y,z];
int min = tablica[0];

for(int i=0; i<sizeof(tablica); i++){
  if (tablica[i]<min)
      min = tablica[i];
    }




    


}








