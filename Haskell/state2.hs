module State2 where

import Control.Monad.State

data EnvironmentVariables = EnvironmentVariables
  { epNum   :: Integer
  , done    :: Bool
  , current :: StateVariables 
  } deriving (Show, Eq)

data StateVariables = StateVariables
  { position  :: Float  -- ^ position of the cart on the track
  , angle     :: Float  -- ^ angle of the pole with the vertical
  , velocity  :: Float  -- ^ cart velocity
  , angleRate :: Float  -- ^ rate of change of the angle
  } deriving (Show, Eq, Ord)

data Action = GoLeft | GoRight deriving (Show,Eq)

type Reward = Float 

-- reset :: State EnvironmentVariables EnvironmentVariables
-- reset = do
--     put $ EnvironmentVariables 0 True (StateVariables 0 0 0 0)
--     currentState <- get
--     return currentState

step :: Action -> StateT EnvironmentVariables Reward
step a = do
    EnvironmentVariables e a1 a2  <- get
    put $ EnvironmentVariables e a1 a2