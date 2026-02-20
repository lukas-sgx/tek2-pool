myLenght :: [a] -> Int
myLenght [] = 0
myLenght (s:e) = 1 + myLenght e
