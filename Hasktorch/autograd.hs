import Torch
import Torch.Autograd 
import Torch.TensorFactories
import Prelude hiding (exp)


main = do
 xi <- makeIndependent $ ones' [2,2]
 yi <- makeIndependent $ asTensor([[2,3],[1,2]]::[[Float]])
 let x = toDependent xi
     y = toDependent yi
     z = selu $ sumAll (x * 2 + y * 3)
 print z
 print $ grad z [xi,yi] 