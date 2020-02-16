doubleMe x = 2 * x
tripleMe x = 3 * doubleMe (x-1)
tripleMe' x = 3 * doubleMe x - 1
doubleMe' x = if x > 10 then x*2 else x

