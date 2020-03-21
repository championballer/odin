{-# LANGUAGE ForeignFunctionInterface #-}

import Foreign
import Foreign.Ptr
import Foreign.C.Types
import System.IO.Unsafe (unsafePerformIO)
import qualified Language.C.Inline as C

C.import "ex.h"

foreign import ccall unsafe "./ex.h sample"
  sample_h :: CDouble -> Ptr CInt -> IO CDouble

sample_x :: Double -> (Double, Int)
sample_x x = unsafePerformIO $
 alloca $ \expptr -> do
    f <- sample_h (realToFrac x) expptr
    e <- peek expptr
    return (realToFrac f, fromIntegral e)

main :: IO()
main = do
    print $ sample_x 2.0 

