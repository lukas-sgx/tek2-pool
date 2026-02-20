myLenght :: [a] -> Int
myLenght [] = 0
myLenght (s:e) = 1 + myLenght e

myNth :: [a] -> Int -> a
myNth (_) i | i < 0 = error "index negative"
myNth [] _ = error "index too large"
myNth (s:_) i | i == 0 = s
myNth (_:e) i = myNth e (i - 1)