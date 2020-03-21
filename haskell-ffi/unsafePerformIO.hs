import System.IO.Unsafe

sample :: Int -> IO (Maybe Int)
sample a = do
    print a
    return (Just a)

usafe a = unsafePerformIO $ sample a