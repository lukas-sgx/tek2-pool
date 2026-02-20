myTake :: Int -> [a] -> [a]
myTake i (x) | i < 0 = x
myTake i (s:_) | i == 0 = [s]
myTake i (s:e) = s : myTake (i - 1) e