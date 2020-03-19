import Torch

t1 = asTensor([1,3]::[Float])
t2 = asValue(t1) :: [Float]
main :: IO()
main = do
    print t1
    print t2