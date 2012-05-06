#include <stdlib.h>

static char b64_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

int base64_encode(unsigned char *data, size_t nbytes, char *buf, size_t nchars)
{
    size_t i;

    for (i = 0; i * 6 < nbytes * 8 && i < nchars; i++) 
    {
        size_t byte = (i * 6) / 8;
        int c = 0;

        switch ((i * 6) % 8) 
        {
            case 0:
                c = data[byte] >> 2;
                break;
            case 2:
                c = data[byte] & ~0xC0;
                break;
            case 4:
                c = (data[byte] & ~0xF0) << 2;
                if (byte + 1 < nbytes)
                    c |= data[byte+1] >> 6;
                break;
            case 6:
                c = (data[byte] & ~0xFC) << 4;
                if (byte + 1 < nbytes)
                    c |= data[byte+1] >> 4;
            break;
        }
        buf[i] = b64_chars[c];
    }

    if (i < nchars)
        buf[i] = 0;

    return i;
}