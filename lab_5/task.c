#define _USE_MATH_DEFINES 
#define _CRT_SECURE_NO_WARNINGS
#define M_PI 
#include <math.h>
#include <stdio.h>
#include <locale.h>
int task0() {
	float x, y;
	scanf("%f", &x);
	scanf("%f", &y);
	double Res1;
	Res1 = 0.5 * y;
	double Res2;
	Res2 = pow(x, Res1);
	Res2 = pow(x, 0.5 * y);
	double Res3;
	Res3 = sin(Res2);
	Res3 = sin(pow(x, 0.5 * y));
	double Res4;
	Res4 = y + 8e-4;
	double Res5;
	Res5 = pow(Res4, 1 / 5.f);
	Res5 = pow(y + 8e-4, 1 / 5.f);
	double Result;
	Result = Res3 + Res5;
	Result = sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f);
	printf("ответ: % .3f", sin(pow(x, 0.5 * y)) + pow(y + 8e-4, 1 / 5.f));
}
int task1() {
	float grad;
	scanf("%f", &grad);
	long float otv = grad * (M_PI / 180);
	printf("ответ: % .6f", sin(otv));

			}
int task2() {
	float x;
	scanf("%f", &x);
	float k = 8.2;
	float b = sqrt(fabs(x));
	float a = pow(b, 4) + pow(k, 3);
	float y = pow(log(a), 3) + exp(-x);
	printf("ответ: % .2f", y);
}
int task3() {
	float x;
	scanf("%f", &x);
	float k = 8.2f;
	float b = sqrtf(fabsf(x));
	float a = powf(b, 4) + powf(k, 3);
	float y = powf(logf(a), 3) + expf(-x);
	int ai = (int)a;
	int bi = (int)b;
	if ((ai % 2 == 0 && bi % 2 != 0) || (ai % 2 != 0 && bi % 2 == 0)) {
		printf("1");
	} else {
		printf("0");
	}

	return 0;
}
	


	int main() {
		setlocale(LC_ALL, "Russian");
		return 0;
	}

