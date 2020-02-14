doubleMe x = 2 * x
tripleMe x = 3 * doubleMe (x-1)
tripleMe' x = 3 * doubleMe x - 1