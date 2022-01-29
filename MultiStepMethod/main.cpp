#include <iostream>
using namespace std;
#define e 2.718281828459045235
ofstream file;

double fun(double x, double y) {
	return (1 / x) * (-powl(x, 5) * powl(y, 3) * powl(e, x) - 2 * y);
}

double *GetEvenGrid(int numOfDots, double a, double b, double *delta) {
	*delta = (b - a) / (double)numOfDots;
	double *grid = new double[numOfDots + 1];
	grid[0] = a;
	for (int i = 1; i < numOfDots + 1; i++) {
		grid[i] = grid[i - 1] + (*delta);
	}
	return grid;
}

double *MultiStepMethod(double a, double b, double x0, double y0, double E, double (*fun) (double, double), int n, double **grid) {
	double *funGrid = new double[n + 1];
	funGrid[0] = y0;

	double delta;
	*grid = GetEvenGrid(n, a, b, &delta);

	for (int i = 1; i < n + 1; i++) {
		double var1 = funGrid[i] + delta / (double)24 * ( 55 * fun(*grid[i], funGrid[i]) - 59 * fun(*grid[i - 1], funGrid[i - 1]) );
		double var2 = ;

	}
}

int main(void) {

	return 0;
}