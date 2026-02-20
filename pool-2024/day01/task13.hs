myLenght :: [a] -> Int
myLenght [] = 0
myLenght (_:e) = 1 + myLenght e