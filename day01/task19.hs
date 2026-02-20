myInit :: [a] -> [a]
myInit [] = error "Empty list"
myInit x | myLenght x == 1 = []
myInit (s:e) = s : myInit e