import Prelude

type Stack = []
push :: a -> Stack a -> Stack a
push = (:)

pop :: Stack a -> a
pop = head

suffixess :: Stack a -> [[a]]
suffixess [] = [[]]
suffixess x = x : suffixess (tail x)

main = do
  putStrLn $ show $ push 2 [3,4]
  putStrLn $ show $ pop [4,5]
  putStrLn $ show $ suffixess [1,2,3,4]
