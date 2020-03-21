{-# LANGUAGE RecordWildCards #-}

data MLP = MLP{
    l0 :: Int, 
    l1 :: Int,
    l2 :: Int
    } deriving (Eq, Show)

f MLP{..} = l0 + l1 + l2