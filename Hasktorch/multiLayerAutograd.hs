import Torch
import Torch.Functional
import Torch.Autograd
import Torch.TensorFactories

main = do
 xi <- makeIndependent $ asTensor([[1],[2],[3],[4]]::[[Float]])
 wi1 <- makeIndependent $ ones' [4,3]
 wi2 <- makeIndependent $ ones' [3,1]
 let x = toDependent xi
     w1 = toDependent wi1
     w2 = toDependent wi2
     h1 = (transpose2D x) `matmul` w1
     h2 = h1 `matmul` w2
 print h1
 print h2
 print $ grad h2 [wi1,wi2]