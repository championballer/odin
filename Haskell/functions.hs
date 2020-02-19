greet2 :: String -> String -> String
greet :: String -> String
greetAgain x = putStrLn(show(x))

greet2 firstName lastName = "hello " ++ firstName ++ " " ++ lastName
greet firstName = "hello " ++ firstName
main = 
    do 
        putStrLn(greet2 "Shiv" "Chandok")
        putStrLn(greet "Shiv")
        greetAgain 10