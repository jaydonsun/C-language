/*输入两个浮点数，输出它们中的大数*/
#include <stdio.h>
main()
{
	float x, y, c;
	printf("Please input x and y:\n");
	scanf("%f%f", &x, &y);
	c = x > y ? x : y;
	printf("MAX of (%f,%f) is %f", x, y, c);
}