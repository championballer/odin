take' :: (Num i, Ord i) => i->[a]->[a]
take' _ [] = []
take' n (x:xs) 
  | n<=0 = []
  | otherwise = [x] ++  take' (n-1) xs