take' :: (Num i, Ord i) => i->[a]->[a]
take' _ [] = []
take' n (x:xs) 
  | n<=0 = []
  | otherwise = [x] ++  take' (n-1) xs

reverse' :: [a] -> [a]
reverse' [] = []
reverse' x = last x : reverse' (init x) 

replicate' :: (Num b, Ord b) => a->b->[a]
replicate' x n
    | n<=0 = []
    | otherwise = x:replicate' x (n-1)

zip' :: [a] -> [b] -> [(a,b)]
zip' [] _ = []
zip' _ [] = []
zip' (x:xs) (y:ys) = (x,y):zip' xs ys

elem' :: (Eq a) => a->[a]->Bool
elem' _ [] = False
elem' y (x:xs)  
   | x==y = True
   | otherwise = elem' y xs

qsort :: (Eq a, Ord a) => [a] -> [a]
qsort [] = []
qsort (x:xs) =
	let leftElements = qsort [a | a<-xs,a<=x ]
	    rightElements = qsort [b | b<-xs,b>x ]
	in leftElements ++ [x] ++ rightElements