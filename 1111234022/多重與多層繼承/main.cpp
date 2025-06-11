#include"c.h"

int main()
{
	cout << "¶ê»æ:\n";
	pie_2d pie;
	pie.compute_area();

	cout << "¶êÀ@Åé:\n";
	cron_3d cron;
	cron.compute_v();

	cout << "¶ê¬WÅé:\n";
	cylinder_3d cc;
	cc.compute_s();
	cc.compute_v();

	cout << "«°³ù:\n";
	castle c1;
	c1.cron_3d::compute_v();
	c1.cylinder_3d::compute_v();

	c1.compute_h();
	c1.compute_v();
}