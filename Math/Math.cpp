#include <_TemplateMeta.h>
#include <_Math.h>

int main()
{
    printf("NumType<double>::serial:\t%d\n", NumType<double>::serial);
    Math::testVecMat();
}