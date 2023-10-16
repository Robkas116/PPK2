#include <iostream>
#include <cmath>





int main(){
return 0;
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
//Program wyświetlający wszystkie wyniki działań
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
/*
int x,y,z;
int min, mid, max;
std::cout << "Podaj x,y,z: " << std::endl;
std::cin >> x >> y >> z;
min = x < y ? x : y;
min = z < min ? z : min;
max = x>y ? x : y;
max = z>max ? z : max;
if (x<min and x<max)
    mid = x;
else if (z > min and z<max)
    mid = z;
else if (y>min and y<max)
    mid = y;


std::cout << "Posortowane liczby: " << min << ", " << mid << ", " << max << std::endl;
return 0;


*/


//rogram zwracający liczbe dni w miesiącu
/*
std::cout << "Podaj numer miesiąca" << std::endl;
char x;
std::cin >> x;




switch (x) {
case '1':
    std::cout << "Styczen ma 31 dni";
    break;
case '2':
    std::cout << "Luty ma 28 dni";
    break;
case '3':
    std::cout << "Marzec ma 31 dni";
    break;
case '4':
    std::cout << "Kwiecien ma 30 dni"; 
    break;
}
return 0;
*/

int a, b;
std::cout << "Podaj a,b" << std::endl;
std::cin >> a >> b;
std::cout << "Jakie dzialanie byku? ";
char x;
std::cin >> x;
switch (x) {
    case '+':
        std::cout << a+b;
        break;
    case '-':
        std::cout << a-b;
        break;
    case '*':
        std::cout << a*b;
        break;
    case '/':
        if (b==0)
            std::cout << "Nie.";
        else    
            std::cout << a/b;
        break;

return 0;

}




}
    











