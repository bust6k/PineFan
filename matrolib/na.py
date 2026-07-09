from typing import TypeAlias, Any

class NA:
    """PineScript-like 'na' value."""

    def __repr__(self):
        return "na"

    def __str__(self):
        return "na"

    # Arithmetic propagates na
    def __add__(self, other):
        return self

    __radd__ = __add__

    def __sub__(self, other):
        return self

    __rsub__ = __sub__

    def __mul__(self, other):
        return self

    __rmul__ = __mul__

    def __truediv__(self, other):
        return self

    __rtruediv__ = __truediv__

    def __pow__(self, other):
        return self

    __rpow__ = __pow__

    # Comparisons always return False
    def __eq__(self, other):
        return False

    def __ne__(self, other):
        return True

    def __lt__(self, other):
        return False

    def __le__(self, other):
        return False

    def __gt__(self, other):
        return False

    def __ge__(self, other):
        return False

    # Cannot be used as a boolean
    def __bool__(self):
        raise TypeError("The truth value of 'na' is undefined. Use is_na().")

def is_na(value):
    return value is na

na = NA()

SeriesValue: TypeAlias = Any | NA
