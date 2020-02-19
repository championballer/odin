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