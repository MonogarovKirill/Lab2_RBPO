module student_1bib21091_Lab2_Variant11_Task3;
import <cmath>;
double RBPO::Lab2::Variant11::Task3::funcF4(double e)
{
	double temp0, temp1;
	double f4 = 0;
	int i = 0;
	do
	{
		temp0 = funcA(i);
		temp1 = funcA(i + 1);
		f4 += funcA(i);
		i++;
	} while (abs(temp0 - temp1) > e);
	return f4;
}