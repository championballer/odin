import Torch.Tensor
import Torch.Functional
import Torch.NN
import Prelude hiding (abs)

t1 = asTensor([-1,2,3]::[Float])

main :: IO()
main = do
 print (abs t1)