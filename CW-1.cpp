#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
void  main()
{
	setlocale(LC_ALL,"Russian");
	float a, b;
	cout << "Введите средний радиус и высоту\n";
	cin >> a >> b;
	cout << "Площадь шарового пояса = " << a * b * 2 * 3.14 << endl;
	float c, d, e;
	cout << "Введите первый и второй радиусы, а также высоту\n";
	cin >> c >> d >> e;
	float result = (1.0 / 6) * 3.14 * pow(e, 3) + (1.0 / 2) * 3.14 * (pow(d, 2) + pow(c, 2)) * e;
	cout << "Объем шарового слоя = " << result;
	
}
