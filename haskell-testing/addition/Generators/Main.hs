module Main where

import Test.QuickCheck

genEither :: (Arbitrary a, Arbitrary b) => Gen (Either a b)
genEither = do
	a <- arbitrary
	b <- arbitrary
	elements [Left a, Right b]

genMaybe :: (Arbitrary a) => Gen (Maybe a)
genMaybe = do
	a <- arbitrary
	frequency [(1, return Nothing),(3, return (Just a))]

main :: IO()
main = return ()