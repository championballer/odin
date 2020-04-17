module Main where

import Test.Hspec

recSum :: (Ord a, Num a) => a -> a -> a
recSum a b 
 | a == 0 || b ==0 = 0
 | b == 0 = a 
 | otherwise = (+) a $ recSum a $ b-1

main::IO()
main = hspec $ do
    describe "recsum" $ do
        it "The product of 5 and 3 is 15" $ do
            recSum 5 3 `shouldBe` 15
        it "The product of 2 and 0 is 0" $ do
            recSum 2 0 `shouldBe` 0