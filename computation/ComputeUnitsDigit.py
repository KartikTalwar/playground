
def units_digit(base, exponent):
  table = [
            0, 0, 0, 0,
            1, 1, 1, 1,
            6, 2, 4, 8,
            1, 3, 9, 7,
            6, 4, 6, 4,
            5, 5, 5, 5,
            6, 6, 6, 6,
            1, 7, 9, 3,
            6, 8, 4, 2,
            1, 9, 1, 9
          ]

  return table[(base % 10) * 4 + (exponent % 4)]

print units_digit(26899, 1234567)  # computes units digit for 26899^1234567

