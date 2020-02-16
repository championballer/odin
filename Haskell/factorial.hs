factorial :: Integer -> Integer

factorial n = product [1..n]

main = 
    do
        putStrLn(show(factorial(10)))