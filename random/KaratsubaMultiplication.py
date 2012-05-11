def multiply(x, y):
    if x.bit_length() <= 1536 or y.bit_length() <= 1536:
        return x * y;
    else:
        n     = max(x.bit_length(), y.bit_length())
        half  = (n + 32) / 64 * 32
        mask  = (1 << half) - 1
        xlow  = x & mask
        ylow  = y & mask
        xhigh = x >> half
        yhigh = y >> half

        a = multiply(xhigh, yhigh)
        b = multiply(xlow + xhigh, ylow + yhigh)
        c = multiply(xlow, ylow)
        d = b - a - c

        return (((a << half) + d) << half) + c