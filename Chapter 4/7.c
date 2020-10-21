#include <stdio.h>
#include <float.h>

int main()
{
    double double_num = 1.0/3.0;
    float float_num = 1.0/3.0;

    printf("%.6f %.6f\n", double_num, float_num);
    printf("%.12f %.12f\n", double_num, float_num);
    printf("%.17f %.17f\n", double_num, float_num);
    printf("FLT_DIG = %d, DBL_DIG = %d\n", FLT_DIG, DBL_DIG);

    return 0;
}