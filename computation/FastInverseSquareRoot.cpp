
float FastInverseSqrt(float x)
{
    float xhalf = 0.5f * x;
    int i = *(int*)&x;         // evil floating point bit level hacking

    i = 0x5f3759df - (i >> 1);  // magic square root consant
    x = *(float*)&i;
    x = x*(1.5f-(xhalf*x*x));

    return x;
}

