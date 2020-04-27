{-# LANGUAGE ViewPatterns #-}

import Data.Maybe (fromMaybe)

def :: a -> Maybe a -> a
def = fromMaybe

multiProduct :: Int -> Maybe Int -> Maybe Int -> Maybe Int -> Int
multiProduct req1 (def 10 -> opt1) (def 20 -> opt2) (def 30 -> opt3)
  = req1 * opt1 * opt2 * opt3