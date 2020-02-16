greet2 :: String -> String -> String
greet2 firstName lastName = "hello " ++ firstName ++ " " ++ lastName

main = 
    do 
        putStrLn(greet2 "Shiv" "Chandok")