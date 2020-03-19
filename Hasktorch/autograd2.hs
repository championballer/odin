import Torch
import Torch.Functional
import Torch.Autograd

main = do
 xi <- makeIndependent $ asTensor([[2],[3]]::[[Float]])
 wi <- makeIndependent $ asTensor([[4],[6]]::[[Float]])
 let x = toDependent xi
     w = toDependent wi
     y = ((transpose2D x) `matmul` w)
 print y
 print $ grad y [wi]
