main :: IO()

f :: String -> IO String
f s = return s

g :: String -> IO String
g s = return "Hello"

main = do
 x <- getLine
 x <- f x
 print "First"
 print x
 x <- g x
 print "Second"
 print x