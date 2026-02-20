myLenght :: [a] -> Int
myLenght [] = 0
myLenght (_:e) = 1 + myLenght e

myInit :: [a] -> [a]
myInit [] = error "Empty list"
myInit x | myLenght x == 1 = []
myInit (s:e) = s : myInit e